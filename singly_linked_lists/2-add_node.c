#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of list.
 * @head: pointer to the head of the list.
 * @str: a string to be duplicated
 *
 * Return:  NULL if cuntion fail or the adress of newelement if ok
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int len = 0;


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
	new->next = *head;

	*head = new;


return (new);
}
