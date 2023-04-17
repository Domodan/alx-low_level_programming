/**
 * wildcmp - The function compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the two strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* if both strings are empty, there is a match */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* if string 2 is only asterisk, there is a match */
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	/**
	 * If string 2 is a character, and s1 doesn't match,
	 * strings don't match */
	if (*s2 != '*' && *s1 != *s2)
		return (0);

	/* if string of '**' encountered, jump to the last character */
	if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));

	/* if string 1 is empty and string 2 is not empty, there is no match */
	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	/* s1 = "ab", s2 = "a*", remove first character of each */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* "xyza" and "*a"; keep going until s1 becomes "a" */
	if (*s2 == '*' && *(s2 + 1) != *(s1))
		return (wildcmp(s1 + 1, s2));

	/* we are at "a", "*a" */
	if (*s2 == '*' && *(s2 + 1) == *s1)
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
