#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: return string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int w, y, z;
	char *s;

	if (s1 == NULL)
	{
		w = 0;
	}
	else
	{
		for (w = 0; s1[w]; ++w)
		;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (w + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < w; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + w] = s2[z];
	s[w + y] = '\0';
	return (s);
}

