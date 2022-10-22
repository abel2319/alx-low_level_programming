#include "main.h"
#include <stdio.h>


/**
 *return_size - calcul size of s
 *@s: number
 *@j: to store size
 *
 * Return: size of s
 */
int return_size(char *s, int j)
{
	if (s[j] != '\0')
		return (1 + return_size (s, (j + 1)));
	else
		return (1);
	/*return (j);*/
}

/**
 *palindrome_checked - verifies
 *@s: number
 *@i: to research
 *@j: to move
 * Return: square root of n
 */
int palindrome_checked(char *s, int i, int j)
{
	if (j > (i / 2))
		return (1);
	else if (s[j] == s[i - j - 1])
		return (palindrome_checked(s, i, j + 1));
	else
		return (0);
}

/**
 *is_palindrome - verify if s is a palidrome
 *@s: number
 *
 * Return: 1 if it is, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	if (s == NULL || *s == '\0')
		return (0);
	i = return_size(s, j);
	return (palindrome_checked(s, i - 1, j));
}

