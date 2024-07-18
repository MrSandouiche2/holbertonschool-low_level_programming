#include "main.h"
/**
 * _strcat - Concatène deux chaînes de caractere
 * @dest: La chaîne de destination
 * @src: La chaîne source
 *
 * Return: Un pointeur vers la chaîne
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';

	return dest;
}
