/**
 * swap_int - The function swaps the values of two integers
 *
 * @a: First integer value
 * @b: Second integer value
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
