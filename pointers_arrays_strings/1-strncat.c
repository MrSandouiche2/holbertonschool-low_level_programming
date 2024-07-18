 #include "main.h"

/**
 * _strncat - Concatène deux chaînes de caractere
 * @dest: Chaîne de destination
 * @src: Chaîne source
 * @n: Nombre maximal de caractère
 *
 * Description: Cette fonction concatène la chaîne s
 *
 * Return: Un pointeur vers la chaîne de destination (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	dest_len++;

	while (src[i] != '\0' && i < n)
	{
	dest[dest_len + i] = src[i];
	i++;
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
