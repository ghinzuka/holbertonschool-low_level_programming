#include "lists.h"
/**
 * insert_dnodeint_at_index - that inserts a new node at a given position.
 * @idx:  idx is the index of the list where the new node should be added.
 * @n: integer to insert in the new node
 * @h: pointer to the head of the list
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp = *h;
dlistint_t *new;

if (h == NULL)
{
	return (NULL);
}
if (idx == 0)
{
	return (add_dnodeint(h, n));
}

while (idx != 1 && temp && temp->next)
{
	temp = temp->next;
	idx--;
	if (temp == NULL)
	{
		return (NULL);
	}

}
if (temp->next == NULL)
{
	return (add_dnodeint_end(h, n));
}

new = malloc(sizeof(dlistint_t));

if (new == NULL)
{
	return (NULL);
}
new->n = n;
new->prev = temp;
new->next = temp->next;
temp->next->prev = new;
temp->next = new;

return (new);
}
