/**
 * _isupper - check if letter is uppercase
 *
 * @c: print int
 *
 * Return: 0 always
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
