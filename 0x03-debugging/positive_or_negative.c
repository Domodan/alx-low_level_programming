#include <stdio.h>
/**
 * positive_or_negative - check for positive or negative number
 *
 * @n: number to test
 *
 * Return: 0 always
 *
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
