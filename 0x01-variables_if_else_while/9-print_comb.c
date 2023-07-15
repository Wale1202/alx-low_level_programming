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
		if (i == 9)
			putchar(i + '0');
		else
		{	putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
