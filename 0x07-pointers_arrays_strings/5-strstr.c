/**
 * *_strstr - The function locates a substring
 *
 * @haystack: string
 * @needle: substring to be located
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
