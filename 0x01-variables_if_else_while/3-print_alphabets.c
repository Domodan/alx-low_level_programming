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
	char alphabetUpper = 'A';

	do {
		putchar(alphabetUpper);
		alphabetUpper++;
	} while (alphabetUpper <= 'Z');
	putchar('\n');
	return (0);
}
