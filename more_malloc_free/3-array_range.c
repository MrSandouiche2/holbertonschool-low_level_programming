#include "main.h"
#include <stdlib.h>


/**
 * array_range - créée un tableau d'int
 * @min: valeur 1
 * @max: valeur 2
 *
 * Return: integre
 */

int *array_range(int min, int max)
{
	int *point;
	int positions, count = 0;

	if (min > max)
		return (NULL);
	positions = (max - min) + 1;
	point = malloc(positions * sizeof(int));
	if (point == NULL)
		return (NULL);
	for (; count < positions; count++)
	{
		point[count] = min;
		min += 1;
	}
	return (point);
}
