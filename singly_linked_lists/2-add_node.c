#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - Ajoute un nouveau nœud au début d'une liste chaînée
 * @head: Double pointeur vers la tête de la liste
 * @str: Chaîne de caractères pour le nouveau nœud
 *
 * Return: noeud
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;
	char *duplicated_str;

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

	new_node->str = duplicated_str;
	len = strlen(str);
	new_node->len = len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
