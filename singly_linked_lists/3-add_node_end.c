#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer the head of the list
 * @str: string to copy
 * Return: NULL if function fail or the adress of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
return (new);
}
