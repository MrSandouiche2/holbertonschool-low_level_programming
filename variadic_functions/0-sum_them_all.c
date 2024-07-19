#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - affiche le sum
 * @n: var
 *
 * Description: Cette fonction va print le sum ou return un 0
 *
 *Return: 0 ou le sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list Romain;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(Romain, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(Romain, int);
	}
	va_end(Romain);

	return (sum);
}
