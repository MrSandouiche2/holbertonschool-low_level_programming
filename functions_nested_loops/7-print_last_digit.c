#include "main.h"


int print_last_digit(int n)
{

int i;
	i = n % 10;

	if (i < 0)
	{
		i = -i;

		_putchar('0' + i);
	}
	return (i);
}
