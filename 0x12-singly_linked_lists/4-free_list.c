#include "lists.h"

/**
 * free_list - This function frees a list
 * @head: head of the linked list.
 * Return: It returns NULL.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

