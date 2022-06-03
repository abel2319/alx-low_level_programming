#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int t;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
t = n % 10;

if (t < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
else if (t == 0)
	printf("Last digit of %d is %d and is 0\n", n, t);
if (t > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, t);
return (0);
}
