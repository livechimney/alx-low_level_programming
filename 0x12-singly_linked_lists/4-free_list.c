#include "lists.h"

/**
 * free_list - release the allocated memory list
 * @head: a pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
}

}
