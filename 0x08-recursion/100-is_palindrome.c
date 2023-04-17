/**
 * _strlen - The function returns the length of a string recursively
 *
 * @s: string whose length is to be determined
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * _palindrome - The function checks if a string is a palindrome
 *
 * @s: string to check
 * @c: counter
 * @len: string length
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int _palindrome(char *s, int c, int len)
{
	if (s[c] != s[len - 1])
		return (0);
	else if (c >= len)
		return (1);
	return (_palindrome(s, c + 1, len - 1));
}

/**
 * is_palindrome - The function returns 1 if a string is a
 * palindrome and 0 if not
 *
 * @s: string to check if it's a palindrome
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s != '\0')
		return (_palindrome(s, 0, _strlen(s)));
	return (1);
}
