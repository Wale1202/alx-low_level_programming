#include <stdio.h>
/**
 * main - entry point of the program
 * Return: exit status of the program
 */
int main(void)
{
	int unit = '0';
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (unit = '0'; unit <= '9'; unit++)
		{
			if (!((unit == i) || (i > unit)))
			{
				putchar(i);
				putchar(unit);
				if (!(unit == '9' && i == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
