#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node
 * @head: double pointer
 * @index: node index
 *
 * Return: index node pointer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *t, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	t = *head;
	for (j = 0; j < index - 1; j++)
	{
		if (t->next == NULL)
			return (-1);
		t = t->next;
	}
	next = t->next;
	t->next = next->next;
	free(next);
	return (1);

}
