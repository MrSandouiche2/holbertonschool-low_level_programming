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
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
s++;
_puts_recursion(s);
}
