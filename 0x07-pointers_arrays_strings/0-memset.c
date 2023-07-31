#include "main.h"
#include <stdio.h>

/* ... (the given simple_print_buffer function) */

int main(void)
{
char buffer[98] = {0}; /* Initialize array with 0 */

simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
printf(".......\n");
simple_print_buffer(buffer, 98);
return (0);
}

