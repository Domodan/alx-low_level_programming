#include "main.h"
/**
 * _puts_recursion - The function that prints a string, followed by a new line.
 *
 * @s: The String to print
 *
 * Return: nothin
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
