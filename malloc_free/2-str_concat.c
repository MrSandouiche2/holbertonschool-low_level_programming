#include "main.h"
#include <stdlib.h>
#include <stddef.h>

char *str_concat(char *s1, char *s2)
{
int i, length_s1, length_s2, j;
length_s1 = 0;
length_s2 = 0;
int total_length;
char *total;
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
total_length = length_s1 + length_s2 + 1;

*total = malloc(total_length * sizeof(char));
if (total == NULL)
{
	return (NULL);
}
for (i = 0; i < length_s1; i++)
{
	total[i] = s1[i];
}
for (j = 0; j < length_s2; j++)
{
	total[length_s1 + j] = s2[j];
}
total[length_s1 + length_s2] = '\0';
return (total);
}
