#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: exit status of the program
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
