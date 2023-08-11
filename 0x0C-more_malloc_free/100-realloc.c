#include "main.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer
 * @old_size: space for ptr
 * @new_size: bytes
 *
 * Return: pointer provides new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, ns = new_size;
	char *oldpt = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		ns = old_size;
	for (i = 0; i < ns; i++)
		p[i] = oldpt[i];
	free(ptr);
	return (p);
}
