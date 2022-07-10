#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry code
 * @argv: number of argument
 * @args: grid containing all arguments
 *
 * Return: 0 if everythings goe well
 * Or 98 if argv != 4
 * 99 if args[2] is not an operation defined
 * 100 if we try to divide by 0
 */
int main(int argv, char *args[])
{
	int (*func)(int,  int);

	if (argv != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(args[3]) == 0 && (*args[2] == '/' || *args[2] =='%'))
	{
		printf("Error\n");
		exit(100);
	}
	func = (*get_op_func)(args[2]);
	if (args[2][1] != '\0' || func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", func(atoi(args[1]), atoi(args[3])));
	return (0);
}
