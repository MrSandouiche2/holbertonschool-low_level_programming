#include "main.h"
#include <stdio.h>
/**
 * _strcpy - fonction
 *
 * Description: print la source d'un truc
 *@dest: pointeur
 *@src: pointeur
 *
 * Return: Always 0 (Success)
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
