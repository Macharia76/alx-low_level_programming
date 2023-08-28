#include "lists.h"

/**
 * sum_listint - It returns the sum of all the data (n) of
 * a linked list.
 * @head: The head of a list.
 *
 * Return: sum of all the data (n) and 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

