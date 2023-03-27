#include "main.h"
/**
 * print_rev - The function prints the string in a reverse order
 *
 * @s: The string to be printed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	for (size = size - 1; size >=0; size--)
		_putchar(s[size]);
	_putchar('\n');
}
