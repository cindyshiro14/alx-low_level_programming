#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size) {
    shash_table_t *hash_table = malloc(sizeof(shash_table_t));

    if (hash_table == NULL) {
        return (NULL);
    }

    hash_table->size = size;
    hash_table->array = malloc(sizeof(shash_node_t *) * size);

    if (hash_table->array == NULL) {
        free(hash_table);
        return (NULL);
    }

    for (unsigned long int i = 0; i < size; ++i) {
        hash_table->array[i] = NULL;
    }

    hash_table->shead = NULL;
    hash_table->stail = NULL;

    return (hash_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The hash table to add or update the key/value pair
 * @key: The key. Cannot be an empty string
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || *key == '\0') {
        return (0);
    }

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL) {
        return (0);
    }

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = NULL;

    if (ht->array[index] == NULL) {
        new_node->sprev = NULL;
        new_node->snext = NULL;
        ht->array[index] = new_node;
        if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0) {
            new_node->snext = ht->shead;
            if (ht->shead != NULL) {
                ht->shead->sprev = new_node;
            } else {
                ht->stail = new_node;
            }
            ht->shead = new_node;
        } else {
            shash_node_t *current = ht->shead;
            while (current->snext != NULL && strcmp(current->snext->key, key) < 0) {
                current = current->snext;
            }
            new_node->snext = current->snext;
            new_node->sprev = current;
            if (current->snext != NULL) {
                current->snext->sprev = new_node;
            } else {
                ht->stail = new_node;
            }
            current->snext = new_node;
        }
    } else {
        shash_node_t *temp = ht->array[index];
        while (temp != NULL) {
            if (strcmp(temp->key, key) == 0) {
                free(temp->value);
                temp->value = strdup(value);
                free(new_node->key);
                free(new_node->value);
                free(new_node);
                return (1);
            }
            temp = temp->next;
        }
        new_node->next = ht->array[index];
        ht->array[index] = new_node;

        new_node->snext = temp;
        if (temp == ht->shead) {
            new_node->sprev = NULL;
            ht->shead = new_node;
        } else {
            new_node->sprev = temp->sprev;
            temp->sprev->snext = new_node;
        }
        temp->sprev = new_node;
    }
    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash table
 * @ht: The hash table to look into
 * @key: The key you are looking for
 * Return: The value associated with the element, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key) {
    if (ht == NULL || key == NULL || *key == '\0') {
        return (NULL);
    }

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    shash_node_t *node = ht->array[index];

    while (node != NULL) {
        if (strcmp(node->key, key) == 0) {
            return (node->value);
        }
        node = node->next;
    }
    return (NULL);
}

/**
 * shash_table_print - Prints the hash table using the sorted linked list
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht) {
    if (ht == NULL) {
        return;
    }

    shash_node_t *node = ht->shead;

    printf("{");
    while (node != NULL) {
        printf("'%s': '%s'", node->key, node->value);
        if (node->snext != NULL) {
            printf(", ");
        }
        node = node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the hash table's key/value pairs in reverse order
 * using the sorted linked list
 * @ht: The hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht) {
    if (ht == NULL) {
        return;
    }

    shash_node_t *node = ht->stail;

    printf("{");
    while (node != NULL) {
        printf("'%s': '%s'", node->key, node->value);
        if (node->sprev != NULL) {
            printf(", ");
        }
        node = node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 */
void shash_table_delete(shash_table_t *ht) {
    if (ht == NULL) {
        return;
    }

    for (unsigned long int i = 0; i < ht->size; ++i) {
        shash_node_t *node = ht->array[i];
        shash_node_t *temp;

        while (node != NULL) {
            temp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = temp;
        }
    }
    free(ht->array);
    free(ht);
}
