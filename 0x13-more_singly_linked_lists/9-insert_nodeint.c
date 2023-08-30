#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserting a new node
 * @head: double pointer
 * @idx: The node index
 * @n: the value of the new node
 *
 * Return: new node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t, *ne;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		t = *head;
		for (i = 0; i < idx - 1 && t != NULL; i++)
		{
			t = t->next;
		}
		if (t == NULL)
			return (NULL);
	}
	ne = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	if (idx == 0)
	{
		ne->next = *head;
		*head = ne;
		return (ne);
	}
	ne->next = t->next;
	t->next = ne;
	return (ne);
}
