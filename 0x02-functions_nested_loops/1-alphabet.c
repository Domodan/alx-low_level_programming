#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 *
 * Description: The program prints the alphabet, in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet = 'a';

        do {
                _putchar(alphabet);
                alphabet++;
        } while (alphabet <= 'z');
        _putchar('\n');
}
