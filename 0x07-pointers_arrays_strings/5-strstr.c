/**
 * _strstr - Entry to code
 * @haystack: where we looking for
 * @needle: what we looking for
 *
 * Return: address of first occurence substring needle
 * Or NULL if nothing found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int count = 1;

	while (needle[t] != 0)
		t++;

	while (s[j + t] != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (s[j + i] == needle[i])
				count++;
			else
			{
				j = j + i;
				break;
			}
		}
		if (count == t)
			return (s + j);
		j++;
	}
	return (0);
}
