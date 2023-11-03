#include "hash_tables.h"
#include <stdio.h>

void hash_table_print(const hash_table_t *ht) {
if (ht == NULL) {
return;
}

unsigned long int i;
hash_node_t *node;
int flag = 0;

printf("{");
for (i = 0; i < ht->size; i++) {
node = ht->array[i];
while (node != NULL) {
if (flag == 1) {
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
flag = 1;
node = node->next;
}
}
printf("}\n");
}
