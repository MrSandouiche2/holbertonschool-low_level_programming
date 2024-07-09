#include "main.h"
#include <stdlib.h>

/**
 * create_array - fonction
 *
 * Description: va creer un tableau de char
 *@size: var
 *@c: var
 *
 * Return: Always 0 (Success)
 */



char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tableau;
if (size == 0)
{
	return (NULL);
}
tableau = (char *)malloc(size * sizeof(char));

if (tableau == NULL)
{
	return (NULL);
}

for (i = 0; i < size; i++)
{
	tableau[i] = c;
}

return (tableau);
}
