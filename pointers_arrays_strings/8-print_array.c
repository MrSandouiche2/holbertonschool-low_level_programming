#include "main.h"
#include <stdio.h>
/**
 * print_array - fonction
 *
 * Description: print les valeurs des tableaux
 *@a: pointeur
 *@n: var
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
