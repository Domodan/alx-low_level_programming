/**
 * square_root - The function computes the square root of a number
 *
 * @n: number whose square root is required
 * @c: counter
 *
 * Return: square root, -1 otherwise
 */
int square_root(int n, int c)
{
	if (c * c > n)
		return (-1);
	else if (c * c == n)
		return (c);
	else
		return (square_root(n, c + 1));
}

/**
 * _sqrt_recursion - The function returns the natural square root of a number
 *
 * @n: number whose square root is to be returned
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (square_root(n, 2));
}
