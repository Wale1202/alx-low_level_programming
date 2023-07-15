#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: exit status of the program
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
