#include "lists.h"

/**
 * free_dlistint - Frees a linked list.
 * @head: The first node of list.
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
