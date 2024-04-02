#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: first node of the list
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
return (n);
}
