#include "lists.h"

/**
 * get_nodeint_at_index - retreive a node at an index
 * @head: pointer to the first node element of list
 * @index: node desired position to the retrieve
 *
 * Return: pointer to the retrieved node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g;

	for (g = 0; g < index; g++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}

