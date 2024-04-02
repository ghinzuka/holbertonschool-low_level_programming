#include "lists.h"
/**
 * get_dnodeint_at_index -  that returns the nth node of a linked list.
 * @index: is the index of the node, starting from 0
 * @head:  head of the list
 * Return: if the node does not exist, return NULL else return pos
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0)
	{
		if (head == NULL)
		{
		return (NULL);
		}
		head = head->next;
		index--;
	}

return (head);
}
