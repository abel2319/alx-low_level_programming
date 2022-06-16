/**
 * cap_string - Entry to code
 * @str: string to capitalize
 *
 * Return: Always nothing(Success)
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i + 1] = str[i + 1] - 32;

		if (str[i] == ',' || str[i] == ';' || str[i] == '.')
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i + 1] = str[i + 1] - 32;

		else if (str[i] == '!' || str[i] == '?' || str[i] == '"')
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i + 1] = str[i + 1] - 32;

		else if (str[i] == '"' || str[i] == '(' || str[i] == ')')
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i + 1] = str[i + 1] - 32;

		else if (str[i] == '{' || str[i] == '}' || str[i] == ' ')
			if ((str[i] >= 97) && (str[i] <= 122))
				str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
