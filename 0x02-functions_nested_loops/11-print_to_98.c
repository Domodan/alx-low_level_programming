#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: the number to start from
 *
 * Return: 0 always
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	}
	printf("%d\n", 98);
}
