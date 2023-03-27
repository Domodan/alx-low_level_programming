#include "main.h"
/**
 * puts_half - The function prints half of a string, followed by a new line
 *
 * @str: The string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int length_of_the_string = 0, n;

	while (str[length_of_the_string] != '\0')
		length_of_the_string++;

	if (length_of_the_string % 2 == 0)
		n = length_of_the_string / 2;
	else
		n = (length_of_the_string - 1) / 2;

	for (; n < length_of_the_string; n++)
		_putchar(str[n]);
	_putchar('\n');
}
