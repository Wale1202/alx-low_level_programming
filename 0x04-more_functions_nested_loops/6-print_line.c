#include "main.h"

/**
 * print_line - printing straight lines
 * @n: number of times the charater "_" wil be printed
 *
 * Return: void
 */


void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
