#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	} while (i < 58);
	putchar('\n');
	return (0);
}
