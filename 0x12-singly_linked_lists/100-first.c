#include "lists.h"

/**
 * print - prints before main
 *
 * Return: Nothing
 */
void __attribute__ ((constructor)) print_before_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
