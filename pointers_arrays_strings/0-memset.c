#include "main.h"
/**
 *_memset - fonction
 *
 * Description: va print le nombre de bytes que s va designé
 *@s: pointeur
 *@b: var
 *@n: var aussi
 *
 * Return: Always 0 (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	s[i] = b;
}

return (s);

}
