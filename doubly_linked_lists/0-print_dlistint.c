#include "lists.h"

/**
 * print_dlistint - prints al the elements of a list.
 * @h: header of the list.
 * Return: nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
