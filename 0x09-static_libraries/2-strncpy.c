

/**
 * _strncpy - Entry to code
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: Always new strings dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			dest[i] = '\0';
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
