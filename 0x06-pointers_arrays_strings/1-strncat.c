

/**
 * _strncat - Entry to code
 * @dest: destination
 * @src: source
 * @n: limit
 *
 * Return: Always new strings dest (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int i = 0;
	int j = 1;

	while (dest[t] != '\0')
		t++;
	while ((src[i] != '\0') && (j <= n))
	{
		dest[t] = src[i];
		i++;
		t++;
		j++;
	}
	return (dest);
}
