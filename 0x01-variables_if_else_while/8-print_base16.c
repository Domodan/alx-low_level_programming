#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);
	i = 97;
	while (i < 103)
		putchar(i++);
	putchar('\n');
	return (0);
}
