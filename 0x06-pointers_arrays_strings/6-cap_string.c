/**
 * cap_string - Entry to code
 * @str: string to capitalize
 *
 * Return: Always nothing(Success)
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char delimeters[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 97 && str[i] <= 122)
	       str[0] -=32;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == '\t')
			str[i] = ' ';
		while (delimeters[j] != '\0')
		{
			if ((str[i] == delimeters[j]) && (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] -= 32;
			j++;
		}
		i++;
	}
	return (str);
}
