#include "lists.h"

/**
 * sum_listint - A listint_t linked list.
 * @head: The first node
 *
 * Return: returns sum 
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
