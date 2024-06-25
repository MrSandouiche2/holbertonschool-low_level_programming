#include "main.h"

/**
 * print_most_numbers - fonction
 * Description: ça print les nombres mais ça retire le 2 et 4
 *
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)

{
	int i;
for (i = '0'; i <= '9'; i++)
{
	if (i == '2' || i == '4')
	continue;


_putchar(i);
}
_putchar('\n');

}
