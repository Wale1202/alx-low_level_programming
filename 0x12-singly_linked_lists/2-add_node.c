#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - Adds a new node
  * @head: linked list
  * @str: The string
  *
  * Return: The address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *t;
	int length = 0;

	t = malloc(sizeof(list_t));
	if (t == NULL)
		return (NULL);

	while (str[length])
		length++;

	t->len = length;
	t->str = strdup(str);
	t->next = *head;
	*head = t;
	return (t);
}
