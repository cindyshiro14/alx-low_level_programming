#include <stdio.h>

int main(void)
{
int a[5] = {0, 1, 2, 3, 4};
int *p = a;

printf("Before - a[2] = %d\n", a[2]);
/* Add one line here */
*(p + 5) = 98;
/* End of the added line */

printf("After  - a[2] = %d\n", a[2]);
return (0);
}
