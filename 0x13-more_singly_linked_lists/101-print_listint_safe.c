#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - reallocates memory for an array
 * @list: appending the old list
 * @size: size of the new list which adds to the old list
 * @new: add to the list a new node
 *
 * Return: the new list pointer
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t j;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (j = 0; j < size - 1; j++)
		newlist[j] = list[j];
	newlist[j] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: start of the list pointer
 *
 * Return: nodes in the list total number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (j = 0; j < num; j++)
		{
			if (head == list[j])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
