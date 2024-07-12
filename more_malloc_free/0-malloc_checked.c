#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - fonction
 *
 * Description: ecrit une fonction qui alloue de la memoire
 *@b: var
 *
 *
 * Return: i
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
