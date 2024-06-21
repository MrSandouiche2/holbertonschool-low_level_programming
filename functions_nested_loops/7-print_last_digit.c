#include "main.h"
/**
 * print_last_digit - bon je vais rien dire
 *@n: vieux truc x4
 * Description: exo qui a duré 1000 ans à faire
 *
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{

int last;

last = n % 10;
if (last < 0)
{
	last = last * -1;
}
_putchar(last + '0');
return (last);
}
