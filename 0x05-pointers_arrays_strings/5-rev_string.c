/**
 * rev_string - The function reverses the string
 *
 * @s: The string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int count, i, j;
	char *str, tmp;

	count = 0;
	while (s[count] != '\0')
		count++;

	str = s;
	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = str[j];
			str[j] = str[j - 1];
			str[j - 1] = tmp;
		}
	}
}
