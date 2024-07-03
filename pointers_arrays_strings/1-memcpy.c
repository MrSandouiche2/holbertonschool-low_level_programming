#include "main.h"
/**
 *_memcpy - fonction
 *
 * Description: va copier la memoire de la zone
 *@dest: pointeur
 *@src: pointeur
 *@n: pointeur
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	src[i] = dest[i];
}
return (dest);

}
