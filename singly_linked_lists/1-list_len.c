#include "lists.h"
/**
 * list_len - print la longueur de la list
 * @h: pointer to the head of the list.
 *
 * Return: le nombre d'element dans la linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *i;
	unsigned int j;

	i = h;
	j = 0;
	for (i = h; i != NULL; i = i->next)
	{
		j++;
	}
	return (j);
}
