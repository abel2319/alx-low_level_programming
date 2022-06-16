

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
	int t = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[t] != '\0')
		t++;
	if ((i < t) || (i > t))
	{
		while (j != i)
		{
			if (s1[j] > s2[2])
				return (15);
			if (s1[j] < s2[j])
				return (-15);
			j++;
			if (j == i)
				return (-15);
			if (j == t)
				return (15);
		}
	}
	else
	{
		while (j != i + 1)
		{
			if (s1[j] > s2[j])
				return (15);
			if (s1[j] < s2[j])
				return (-15);
			j++;
		}
	}
	return (0);
}
