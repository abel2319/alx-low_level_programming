#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passrds for the
 *        program
 * Return: random password
 */
int main(void)
{
	int random_number;
	int total = 2772;

	srand(time(NULL));
	while (total > 122)
	{
		random_number = (rand() % 125) + 1;
		printf("%c", random_number);
		total -= random_number;
	}
	printf("%c", total);

	return (0);
}
