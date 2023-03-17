#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'z';

	do {
		putchar(alphabet--);
	} while (alphabet >= 'a');
	putchar('\n');
	return (0);
}
