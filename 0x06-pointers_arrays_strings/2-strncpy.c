

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
	int j = 1;

	while ((src[i] != '\0') && (j <= n))
	{
		dest[i] = src[i];
		i++;
		j++;
		if (src[i] == '\0')
			dest[i] = '\0';
	}
	return (dest);
}
