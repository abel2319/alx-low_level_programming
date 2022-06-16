/**
 * leet - Entry to code
 * @str: string whose with replace aAeEoOtTlL
 *
 * Return: Always nothing(Success)
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char alx[] = "ol?ea??t";

	while (str[i] != '\0')
	{
		for (j = 0; alx[j] != '\0'; j++)
		{
			if ((alx[j] == str[i]) || (alx[j] == (str[i] + 32)))
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
