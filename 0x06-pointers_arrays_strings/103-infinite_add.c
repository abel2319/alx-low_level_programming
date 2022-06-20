#include <stddef.h>
/**
 * int_value - Entry to code
 * @n: number whose we want to return int value
 *
 * Return: The int value of n (Success)
 */
int int_value(char n)
{
	if (n == '1')
		return (1);
	else if (n == '2')
		return (2);
	else if (n == '3')
		return (3);
	else if (n == '4')
		return (4);
	else if (n == '5')
		return (5);
	else if (n == '6')
		return (6);
	else if (n == '7')
		return (7);
	else if (n == '8')
		return (8);
	else if (n == '9')
		return (9);
	return (0);
}

/**
 * int_sum - Entry to code
 *@i: n1 size
 *@j: n2 size
 *@size_r: to verify
 *@r: the buffer
 *@n1: first string
 *@n2: second string
 *
 *
 * Return: Nothing (Success)
 */
/*void int_sum(int i, int j, int size_r, char *r, char *n1, char *n2)
{
	int m1 = '0';
	int m2 = '0';
	int rest = '0';
	int l = 0;
	int t = 0;

	r[]
	for (t = j, l = i; t >= 0 ; t--, l--)
	{
		if (t >= i)
			m1 = '0';
		else
			m1 = int_value(n1[l]);
		m2 = int_value(n2[t]);
		r[t] = (((m1 + m2) % 10) + rest) + '0';
		rest = ((m1 + m2) / 10;
	}
}*/
void int_sum(int i, int j, int size_r, char *r, char *n1, char *n2)
{
	int m1 = 0;
	int m2 = 0;
	int rest = 0;
	int t = 0;
	int l = 0;
	int n = size_r - 2;

	r[size_r - 1] = '\0';
	for (t = j-1, l = i-1, n = size_r-2; t >= 0 ; t--, l--, n--)
	{
		if (l < 0)
			m1 = 0;
		else
			m1 = int_value(n1[l]);
		m2 = int_value(n2[t]);
		if (((m1 + m2)%10 +rest) == 10)
		{
			r[n] = '0';
			rest = 1;
		}
		else
		{
			r[n] = (((m1 + m2) % 10) + rest) + '0';
			rest = ((m1 + m2) / 10);
		}
		if ((t == 0) && (rest == 1) && (n > 0))
			r[n - 1] = '1';
	}
	if (n > 0)
	{
		for (t = 0; t < (size_r - 1 - n); t++)
		{
			r[t] = r[n];
			n++;
		}
	}
}


/**
 * infinite_add - Entry to code
 * @n1: first number
 * @n2: second number
 * @r: the buffer
 * @size_r: buffer size
 *
 * Return: Always the sum of two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int j = 0;
	int n = size_r;

	if (r == NULL || size_r <= 0)
		return (0);
	else
	{
		for (i = 0; n1[i] != '\0'; i++)
			i = i;
		for (j = 0; n2[j] != '\0'; j++)
			j = j;
		if (i < j)
		{
			if ((j + 1) >= size_r)
				return (0);
			int_sum(i, j, n, r, n1, n2);
		}
		else
		{
			if ((i + 1) >= size_r)
				return (0);
			int_sum(j, i, n, r, n2, n1);
		}
	}
	return (r);
}
