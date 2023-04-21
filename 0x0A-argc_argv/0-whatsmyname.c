#include <stdio.h>
#include <stdlib.h>

/**
 * main - the function print its name
 * @argc: argument count
 * @argv: arrary of argument
 *
 * Return: always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
