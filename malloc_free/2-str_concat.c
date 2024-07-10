#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
int i, length_s1, length_s2, j;
if (s1 == NULL)
{
	length_s1 = 0;
}
else
{
	for (i = 0; s1[i] != '\0'; i++)
	{
		length_s1++;
	}

}
if (s2 == NULL)
{
length_s2 = 0;
}
else
{
for (j = 0; s2[j] != '\0'; j++)
{
	length_s2++;
}

}
int total_length = length_s1 + length_s2 + 1;

char *total = malloc(total_length * sizeof(char));
if (total == NULL)
{
	return (NULL);
}

}
