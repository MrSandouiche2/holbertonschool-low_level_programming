#include "main.h"
/**
 * print_rev - fonction
 *
 * Description: print a l'envers
 *@s: pointeur
 *
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int i, j;
for (j = 0; s[j] != '\0'; j++)
{

}
j--;
for (i = j; i >= 0; i--)
{
	_putchar(s[i]);

}
_putchar('\n');



}
