#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - fonction
 *
 * Description: va concatener 2 trucs
 *@s1: pointeur
 *@s2: pointeur
 *
 *
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, length_s1 = 0, length_s2 = 0, total_length;
	char *total;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
		{
			length_s1++;
		}

	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			length_s2++;
		}
	}

	total_length = length_s1 + length_s2 + 1;

	total = malloc(total_length * sizeof(char));
	if (total == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; i < length_s1; i++)
		{
			total[i] = s1[i];
		}

	if (s2 != NULL)
		for (i = 0; i < length_s2; i++)
		{
			total[length_s1 + i] = s2[i];
		}

	total[length_s1 + length_s2] = '\0';

	return (total);
}
