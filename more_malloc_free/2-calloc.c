#include "main.h"
#include <stdlib.h>

/**
 * _calloc - fonctions qui alloue memoire a 0
 * @nmemb: valeur 1
 * @size: valeur 2
 *
 * Return: pointeur
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		point[i] = 0;
	}
	return (point);
}
