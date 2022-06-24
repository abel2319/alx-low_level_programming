#include <stdio.h>

/**
 * main - Print the executable name using argv
 *@argc: number of argument past to main(also size of argv
 *@argv: table taht contains all argument past to executable
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 3)
		printf("%d\n", (argv[1] * argv[2]));
	else
		printf("Error\n");
	return (0);
}
