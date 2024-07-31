#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à ajouter au nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	unsigned int len = 0;

	i = malloc(sizeof(list_t));
	if (i)
	{
		i->str = strdup(str);
		if (i->str)
		{
			while (i->str[len])
				len++;
			i->len = len;
			i->next = *head;
			*head = i;
			return (i);
		}
		free(i);
		return (NULL);
	}
	return (NULL);
}
