#include "lists.h"

/*
 * add_nodeint_end - adding a new node at the end of the linked list.
 * @head: pointer.
 * @n: data that is supposed to be inserted in a new element.
 *
 * Return: pointer.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
