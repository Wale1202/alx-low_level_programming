#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds numbers that are positive.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, k, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		k = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += k;
		}
	}
	printf("%d\n", sum);

	return (0);
}
