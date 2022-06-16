

/**
 * _strcat - Entry to code
 * @dest: destination
 * @src: source
 *
 * Return: Always new strings dest (Success)
 */
char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	return (dest);
}
