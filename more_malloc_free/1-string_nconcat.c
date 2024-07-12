#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - fonction
 *
 * Description: va concatener 2 strings
 *@s1: pointeur
 *@s2: pointeur
 *@n: var
 * Return: retourne le pointeur a un nouveau string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *concat;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (!concat)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < n; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + n] = '\0';

	return (concat);
}
