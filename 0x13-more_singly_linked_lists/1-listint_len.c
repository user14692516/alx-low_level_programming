#include "lists.h"

/*
 * listint_len - returns linked list elements.
 * @h: linked list.
 *
 * Return:node number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
