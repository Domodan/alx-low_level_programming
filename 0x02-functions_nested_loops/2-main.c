#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowercase
 *
 * Description: The program prints the alphabet, in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int alphabet, count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		count++;
		_putchar('\n');
	}
}
