#include <stdio.h>

/**
 * main - the function prints number of arguments past
 * @argc: arguments count.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
