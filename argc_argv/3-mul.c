#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");

		return (1);
	}
	result = (atoi(argv[argc - 2]) * atoi(argv[argc - 1]));
	printf("%d\n", result);

	return (0);
}
