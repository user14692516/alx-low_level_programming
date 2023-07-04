#include "lists.h"

/**
 * free_listint - freeing a linked list.
 * @head: list that is supposed to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
