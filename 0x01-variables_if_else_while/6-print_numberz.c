#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints single digit numbers of base 10 using puchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;

	do {
		putchar(i++);
	} while (i < 58);
	return (0);
}
