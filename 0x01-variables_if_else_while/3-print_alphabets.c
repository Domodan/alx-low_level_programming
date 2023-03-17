#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints alphabet in lowercase, and the in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	alphabet = 'A';

	do {
		putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'Z');
	putchar('\n');
	return (0);
}
