#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for a given amount
 * @argc: number of arguments
 * @argv: array of strings
 * Return: success is 0.
 */
int main(int argc, char *argv[])
{
	int quarter, dime, nickel, tuppence, penny, coins, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}

	quarter = 25;
	dime = 10;
	nickel = 5;
	tuppence = 2;
	penny = 1;
	coins = 0;

	coins = change / quarter;
	change = change % quarter;
	coins += change / dime;
	change = change % dime;
	coins += change / nickel;
	change = change % nickel;
	coins += change / tuppence;
	change = change % tuppence;
	coins += change / penny;

	printf("%d\n", coins);

	return (0);
}
