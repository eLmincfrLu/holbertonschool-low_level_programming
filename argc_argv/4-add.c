#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j;
	int result;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
