#include "lists.h"

/**
 * dlistint_len - print the length of the linked list
 * @h: a pointer to the head of list
 * Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
