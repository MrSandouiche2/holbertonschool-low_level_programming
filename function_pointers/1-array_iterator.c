#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - va executer une fonction
 * @array: pointeur
 * @size: var
 * @action: var
 * Return: aucun return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
