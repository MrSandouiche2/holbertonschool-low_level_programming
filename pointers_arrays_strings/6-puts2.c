#include "main.h"
/**
 * puts2 - fonction
 *
 * Description: print les char d'un string
 *@str: pointeur
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{

_putchar(str[i]);

}

i++;
}

_putchar('\n');
}
