#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head:head of a list.
 * @n:data to inert in the new node 
 *
 * return :address of a new element,or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return(NULL);
	
	new->n =n;
	new->next = *head;
	*head =new;

	return(*new);
}
