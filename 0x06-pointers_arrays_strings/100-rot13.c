/**
 * rot13 - Entry to code
 * @str: string whose with apply ROT13
 *
 * Return: Always nothing(Success)
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char alx1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alx2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		j = 0;
		for (j = 0; alx1[j] != '\0'; j++)
		{
			if (alx1[j] == str[i])
			{
				str[i] = alx2[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
