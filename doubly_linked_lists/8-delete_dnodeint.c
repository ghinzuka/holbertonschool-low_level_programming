#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of list
 * @index: node that should be deleted
 * Return: return 1 if success or -1 if fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp = *head;

if (*head == NULL)
{
	return (-1);
}
while (index != 0)
{
	temp = temp->next;
	if (temp == NULL)
	{
		return (-1);
	}
	index--;
}
if (temp == *head)
{
	*head = temp->next;
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
}

else
{
	temp->prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}

}

free(temp);
return (1);

}
