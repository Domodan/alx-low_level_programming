#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program  prints the minimum number of coins to
 * make change for an amount of money.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 success 1 failure.
 */
int main(int argc, char **argv)
{
	int coins, i, cents;
	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	cents = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cents <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= cents)
			{
				coins = coins + (cents / value[i]);
				cents = cents - (cents / value[i]) * value[i];
				if (cents == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
