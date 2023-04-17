/**
 * factorial - The function returns the factorial of a given number
 *
 * @n: number whose factorial is to be determined
 *
 * Return: Factorial of a number and -1 if otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
