#include "main.h"
#include <stddef.h>
/**
 *_strstr - fonction
 *
 * Description: va chercher un substring
 *@haystack: pointeur
 *@needle: pointeur
 * Return: le resultat
 */


char *_strstr(char *haystack, char *needle)
{
unsigned int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{

j = 0;

while (needle[j] != '\0')
{
	if (haystack[i + j] != needle[j])
	{
		break;
	}
j++;
}
if (needle[j] == '\0')
{
	return (&haystack[i]);
}
}
return (NULL);
}
