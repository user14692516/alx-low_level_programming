#include "lists.h"

/**
 * pop_listint - deleteing the headnode of a new element.
 * @head: pointer to the first element.
 *
 * Return: the data inside the elements.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
