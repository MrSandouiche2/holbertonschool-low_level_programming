#include "function_pointers.h"
#include "stdlib.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_name - va print le nom
 * @name: pointeur
 * @f: pointeur
 *
 * Return: aucun return
 */


void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
/**
 * print_uppercase - va print en maj
 *
 *@str: fonction
 */
void print_uppercase(char *str)
{
	while (*str)
	{
		putchar(toupper(*str));
		str++;
	}
	putchar('\n');
}
