#include "main.h"
/**
 * print_sign - fonction
 *
 *@n: vieux truc x2
 * Description: exo qui a duré 30 ans a faire
 *
 *
 * Return: Always 0 (Success)
 */



int print_sign(int n)
{
	if (n > 0)

{
		_putchar('+');
		return (1);
		}
		else if (n == 0)
		{
		_putchar('0');
		return (0);
		}
		else
		{
		_putchar('-');
		return (-1);
		}
}
