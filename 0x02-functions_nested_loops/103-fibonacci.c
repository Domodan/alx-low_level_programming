#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci
 * sequence whose values do not exceed 4,000,000
 *
 * Return: 0 always
 */
int main(void)
{
	long int n1, n2, sum, total;

	n1 = 1;
	n2 = 2;
	sum = total = 0;
	while (sum <= 4000000)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		if ((n1 % 2) == 0)
		{
			total += n1;
		}
	}
	printf("%ld\n", total);
	return (0);
}
