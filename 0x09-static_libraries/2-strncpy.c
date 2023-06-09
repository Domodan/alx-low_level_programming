/**
 * *_strncpy - The function copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
