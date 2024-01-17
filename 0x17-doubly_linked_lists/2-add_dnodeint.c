#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a head pointer to the linked list
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if(!new_node)
	{
		return(NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return(*head);
	}
	new_node->next = *head;
	/*the below line to link the head->prev to the new->next */
	(*head)->prev = new_node->next;
	*head = new_node;

	return (*head);
}
