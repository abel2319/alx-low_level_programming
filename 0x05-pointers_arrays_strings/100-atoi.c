#include <stdio.h>
#include "main.h"

/**
 *int_value - Entry code
 *@t: character whose we want the int value
 *
 * Return: Always interger wanted (Success)
 */
int int_value(char t)
{
	if (t == '0')
		return (0);

	if (t == '1')
		return (1);

	if (t == '2')
		return (2);

	if (t == '3')
		return (3);

	if (t == '4')
		return (4);

	if (t == '5')
		return (5);

	if (t == '6')
		return (6);

	if (t == '7')
		return (7);

	if (t == '8')
		return (8);

	if (t == '9')
		return (9);
	return (0);
}

/**
 *pw_of_ten - Entry code
 *@n: power
 *
 * Return: Always ten times n(Success)
 */
int pw_of_ten(int n)
{
	int t = 1;

	while (n != 0)
	{
		t *= 10;
		n--;
	}
	return (t);
}

/**
 *_atoi - Entry code
 *@s: pointer whose we change value
 *
 * Return: Always nothing (Success)
 */
int _atoi(char *s)
{
	char i = *(s + 0);
	int j = 0;
	int t = 0;
	int n = 0;
	int stop = 0;
	int rtn = 0;

	while (i != '\0')
	{
		if (i == '-')
		{
			t++;
		}
		else if ((i >= '0') && (i <= '9'))
		{
			break;
		}
		j++;
		i = *(s + j);
	}
	stop = j;
	while (*(s + j) >= '0' && *(s + j) <= '9')
	{
		n++;
		j++;
	}
	j = n;
	while (n != 0)
	{
		if (j == n)
			rtn += -(int_value(*(s + stop) * pw_of_ten(n-1)) / 10);
		rtn += -(int_value(*(s + stop)) * pw_of_ten(n-1));
		stop++;
		n--;
	}
	if (t % 2 == 1)
		return (rtn);
	return (-rtn);
}
