#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: the exit status of the program
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
