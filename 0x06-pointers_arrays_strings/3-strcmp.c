

/**
 * _strcmp - Entry to code
 * @s1: first string
 * @s2: second string
 *
 * Return: Always new strings dest (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			j = (s1[i] - s2[i]);
			break;
		}
		i++;
	}
	return (j);
}

