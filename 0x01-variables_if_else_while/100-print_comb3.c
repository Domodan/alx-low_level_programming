#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48, j;

	do {
		while (j < 58)
		{
			if (i == j)
				continue;
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	} while (i < 58);
	putchar('\n');
	return (0);
}
