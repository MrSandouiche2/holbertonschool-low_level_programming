#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - fonction
 *
 * Description: va chercher un string
 *@s: pointeur
 *@accept: pointeur
 * Return: le resultat de &s[i] ou null
 */


char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			return (&s[i]);
		}
	}
}
return (NULL);


}
