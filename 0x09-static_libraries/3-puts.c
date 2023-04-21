#include "main.h"
/**
 * _puts - The function prints a string, followed by a new line, to stdout
 *
 * @str: The string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		_putchar(str[i++]);
	_putchar('\n');
}
