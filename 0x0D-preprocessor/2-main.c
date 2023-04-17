#include <stdio.h>

/**
 * main - prints the name of a file  it was compiled from
 *
 * Return: 0 always
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
