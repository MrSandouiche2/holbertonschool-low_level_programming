#include "main.h"
/**
 *_strspn - fonction
 *
 * Description: va dire la longueur d'un prefix
 *@s: pointeur
 *@accept: pointeur
 * Return: 5
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, count;
count = 0;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}
			if (accept[j] == '\0')
		{
			break;
		}
}


return (count);
}
