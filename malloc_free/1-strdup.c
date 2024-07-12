#include "main.h"
#include <stdlib.h>

/**
 * _strdup - fonction
 *
 * Description: va creer une fonction qui return un pointer dans un espace
 *@str: pointeur
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int i;

	char *duplicate;

	int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
}
