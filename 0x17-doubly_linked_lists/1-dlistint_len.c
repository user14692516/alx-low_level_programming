#include "lists.h"

/*
 * dlistint_len - returning elements number in a dlistint list.
 *
 * @h: list head.
 * Return: node numbers.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
