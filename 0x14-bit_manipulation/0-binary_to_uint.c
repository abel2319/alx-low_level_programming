/**
 * _convert - converts into integer
 * @b: value to convert
 *
 * Return: value in b as integer
 */
int _convert(char b)
{
	return (b - '0');
}

/**
 * _pw - calaculatres the power of 2
 * @n: exposent
 *
 * Return: the 2 times n
 */
unsigned int _pw(int n)
{
	unsigned int j = 1;
	int t;

	for (t = 0; t < n; t++)
		j *= 2;
	return (j);
}

/**
 * binary_to_uint - converts a binary number to an integer
 * @b: the binary number to convert
 *
 * Return: the value of b convert in integer
 * Or 0 if b is null or contains others character than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int n = 0, j = 0;

	if (b)
	{
		while (b[n] != '\0')
			n++;
		n = n - 1;
		for (; n >= 0; n--)
		{
			if (((b[n]) != '0') && ((b[n]) != '1'))
				return (0);
			i += (_pw(j) * _convert(b[n]));
			j++;
		}
	}
	return (i);
}
