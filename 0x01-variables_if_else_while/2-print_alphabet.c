#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program prints letters of alphabet in lower case
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
	putchar('\n');
	return (0);
}
