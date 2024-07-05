#include "main.h"
/**
 * _puts_recursion - fonction
 *
 * Description: va print un string suivi d'une nouvelle ligne
 *@s: pointeur
 *
 * Return: Always 0 (Success)
 */



void _puts_recursion(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
	_putchar(s[i]);
}
_putchar('\n');

}
