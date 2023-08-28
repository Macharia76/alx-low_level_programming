#include "lists.h"

/**
 * free_listint - This function frees a listint_t list
 * @head: This is a head of a list.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}

