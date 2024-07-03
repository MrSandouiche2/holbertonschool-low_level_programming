#include "main.h"
#include <stddef.h>
/**
 *_strchr - fonction
 *
 * Description: va copier la memoire de la zone
 *@s: pointeur
 *@c: char
 * Return: null or the result
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
	if (*s == c)
	{
		return (s);
	}
s++;
}
{
	if (c == '\0')
	{
		return (s);
	}

}
return (NULL);
}
