#include "lists.h"
#include <string.h> /* Pour strdup et strlen */
#include <stdlib.h> /* Pour malloc et free */

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à ajouter au nouveau nœud.
 *
 * Return: L'adresse du nouveau nœud, ou NULL en cas d'échec.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicated_str;
	size_t str_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	duplicated_str = strdup(str);
	if (duplicated_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	str_len = strlen(str);
	new_node->str = duplicated_str;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
