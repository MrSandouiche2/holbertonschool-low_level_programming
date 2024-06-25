#include "main.h"
/**
 * print_line - fonction
 * Description: ça print les lignes
 *
 *@n: euh placeholder
 * Return: Always 0 (Success)
 */

void print_line(int n)


{

if (n > 0)

{
	int i;

	for (i = 0; n > i; i++)
	{
		_putchar('_');
	}
_putchar('\n');
}
else if (n <= 0)
{
	_putchar('\n');
}
}
