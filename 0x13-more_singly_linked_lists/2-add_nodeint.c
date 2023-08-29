#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - beginning of a listint_t list.
  *
  * @head: double pointer head
  * @n: int add list
  * Return: NULL when its fails
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
