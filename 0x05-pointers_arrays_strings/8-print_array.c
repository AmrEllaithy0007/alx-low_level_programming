#include "main.h"
#include <stdio.h>
/**
 *print_array - Main Entry
 *@n: numbers of Integr
 *@a: array of Integr
 *Return: Void
 *
 **/

void print_array(int *a, int n)
{
{
int  j;

for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
printf(", ");
}
}
printf("\n");
}
