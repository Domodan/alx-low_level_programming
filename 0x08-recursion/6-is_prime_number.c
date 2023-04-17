/**
 * prime_number - check if the number is a prime number
 *
 * @n: number to check
 * @c: counter
 *
 * Return: 1 if n is prime number, 0 otherwise
 */
int prime_number(int n, int c)
{
	if (n % c == 0)
	{
		if (n != c )
			return (0);
		return (1);
	}
	return (0 + prime_number(n, c + 1));
}

/**
 * is_prime_number - The function  returns 1 if the input integer is a
 * prime number, otherwise return 0
 *
 * @n: test number
 *
 * Return: 1 if is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, 2));
}
