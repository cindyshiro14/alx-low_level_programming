#include "main.h"

/**
 * magic - Prints a[2] = 98 followed by a new line.
 */
void magic(void)
{
int *p;
int a[] = {0, 1, 2, 3, 4};

p = a;
p += 2;
*p = 98;
}
