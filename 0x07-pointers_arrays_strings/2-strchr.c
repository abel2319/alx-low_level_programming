/**
 * _strchr - Entry to code
 * @s: where we llooking for
 * @c: what we looking for
 *
 * Return: Always first occurence of c (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
