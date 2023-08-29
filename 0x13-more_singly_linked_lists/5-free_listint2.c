#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a listint_t list
 * @head: a double pointer
 *
 * Return: this is no return so void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}

