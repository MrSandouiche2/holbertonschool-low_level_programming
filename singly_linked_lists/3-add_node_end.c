#include "lists.h"
#include <string.h>
#include <stdlib.h>

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *temp;
	i = malloc(sizeof(list_t));

	i->str = strdup(str);
	i->len = strlen(str);

	if (i == NULL || i->str == NULL)
	{
		free(i);
		return (NULL);
	}
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
	}
else
{
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
temp->next = i;
}
return (i);
}
