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
	printf("%s\n", argv[0]);
	return (0);
}
