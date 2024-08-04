#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: Const pointer to head node
 * @n: Const integer of node to be added
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	(*head)->prev = new;
	new->next = *head;

	*head = new;

	return (*head);
}
