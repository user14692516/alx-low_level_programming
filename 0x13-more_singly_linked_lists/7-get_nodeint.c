#include "lists.h"

/*
 * get_nodeint_at_index - returns node at a specific index.
 * @head: first node.
 * @index: index of the node that is supposed to be returned.
 *
 * Return: pointer to the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
