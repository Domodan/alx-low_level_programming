/**
 * *string_toupper - The function changes all lowercase letters of
 * a string to uppercase
 *
 * @str: source string
 *
 * Return: updated string
 */
char *string_toupper(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		if (str[length] >= 97 && str[length] <= 122)
			str[length] = str[length] - 32;
		length++;
	}
	return (str);
}
