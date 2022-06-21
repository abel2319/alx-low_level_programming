/**
 * _memcpy - Entry to code
 * @dest: where we want to copy
 * @src: where we copy
 * @n: number of bytes
 *
 * Return: Always s (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
