#include "lists.h"

/**
 * free_dlistint - free the linked list
 * @head: a pointer to the head of the list
 * Return: no return
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
