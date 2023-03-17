#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The program print alphabet in lowercase, except p and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	do {
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');
	return (0);
}
