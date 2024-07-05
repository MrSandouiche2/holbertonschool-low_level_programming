#include "main.h"
/**
 * _print_rev_recursion - affiche une chaine de maniere inversé
 * @s: pointeur
 *
 * Description: Cette fonction affiche des char inversé
 *
 *
 */









void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
