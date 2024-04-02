#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: the first node of the list
 * Return: if the list is empty, return 0 or the sum of all n.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

return (sum);

}
