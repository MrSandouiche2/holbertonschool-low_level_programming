#include "main.h"
/**
 * print_alphabet_x10 - fonction
 *
 * Description: 'permet de print l'alphabet avec putchar en 10 fois
 *
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int j;

for (j = 0; j < 10; j++)
{




for (i = 97; i <= 122; i++)
{
	_putchar(i);
}
_putchar('\n');
}

return;

}
