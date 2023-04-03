#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list
 *
 * return:no return
 */
void free_listint(listint_t *head)
{
	listint *temp;
	while ((temp=head) !=NULL)
	{
		head = head->next;
		free(temp);
	}
}
