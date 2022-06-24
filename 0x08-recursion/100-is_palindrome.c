#include "main.h"

/**
 *palindrome_checked - calcul the square rooti of a number
 *@s: number
 *@i: to research
 *@j: to move
 * Return: square root of n
 */
int palindrome_checked(char *s, int i, int j)
{
	if (j > (i / 2))
		return (1);
	if (s[j] == s[i - j])
		return (palindrome_checked(s, i, j + 1));
	else
		return (0);
}

/**
 *is_palindrome - veerify if s is a palidrome
 *@s: number
 *
 * Return: 1 if it is, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	if (s == 0 || *s == '\0')
		return (0);
	for (i = 0; s[i] != '\0'; i++)
		;
	return (palindrome_checked(s, i - 1, j));
}

