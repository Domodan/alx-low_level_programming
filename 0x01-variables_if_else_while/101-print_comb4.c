#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: The Program prints all possible different combinations of
 * three digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 48, j, k;

	do {
		j = i;
		do {
			k = j;
			while (k < 58)
			{
				if (i == j || j == k || i == k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
				{
					break;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		} while (j < 58);
		i++;
	} while (i < 58);
