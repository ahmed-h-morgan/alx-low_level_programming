#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the pointer to the head of linked list
 * @index: the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/*unsigned int node_indx = index - 1;*/
	unsigned int node_count = 0;
	dlistint_t *ptr = head;
	dlistint_t *selected_node = malloc(sizeof(dlistint_t));

	if (!selected_node || head == NULL)
	{
		return (NULL);
	}
	if (head != NULL && index == 0)
	{
		return (head);
	}
	while (node_count <= index)
	{
		ptr = ptr->next;
		node_count++;
	}
	ptr = ptr->prev;

	return (ptr);

}
