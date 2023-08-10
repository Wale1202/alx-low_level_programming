#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: function copies
 * @src: source location
 * @dest: destination location
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
