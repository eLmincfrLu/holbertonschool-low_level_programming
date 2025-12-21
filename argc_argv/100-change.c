#include <stdio.h>
#include <stdlib.h>

/**
 * get_coins - calculates minimum number of coins
 * @cents: amount in cents
 *
 * Return: number of coins
 */
int get_coins(int cents)
{
	int count = 0;

	while (cents >= 25)
	{
		cents -= 25;
		count++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		count++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		count++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		count++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		count++;
	}

	return (count);
}

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", get_coins(cents));

	return (0);
}
