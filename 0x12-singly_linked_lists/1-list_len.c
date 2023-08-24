#include "lists.h"
/**
 * list_len - This function returns then number of elements in a list.
 * @h: The singly linked list.
 * Return: The number of elements or nodes in the list.
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}

