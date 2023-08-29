#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - a listint_t list.
  *
  * @head: double pointer head
  * @n: adds the list
  * Return: NULL if it doesn't go through
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ne;
	listint_t *t;

	if (head == NULL)
		return (NULL);
	ne = malloc(sizeof(listint_t));
	if (ne == NULL)
		return (NULL);
	ne->n = n;
	ne->next = NULL;
	if (*head == NULL)
	{
	*head = ne;
		return (ne);
	}
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = ne;
	return (ne);
}
