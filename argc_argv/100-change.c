#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int a;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
	}
	if (cents >= 25)
	{
		a = cents / 25;
		cents = cents - (a * 25);
		coins += a;
	}
	if (cents >= 10)
	{
		a = cents / 10;
		cents = cents - (a * 10);
		coins += a;
	}
	if (cents >= 5)
	{
		a = cents / 5;
		cents = cents - (a * 5);
		coins += a;
	}
	if (cents >= 2)
	{
		a = cents / 2;
		cents = cents - (a * 2);
		coins += a;
	}
	if (cents >= 1)
	{
		a = cents / 1;
		cents = cents - (a * 1);
		coins += a;
	}
	printf("%d", coins);
	return (0);
}
