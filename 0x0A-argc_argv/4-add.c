#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the executable name using argv
 *@argc: number of argument past to main(also size of argv
 *@argv: table taht contains all argument past to executable
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i< argc; i++)
		{
			if (atoi(argv[i]))
				sum += atoi(argv[i]);
			else
				break;
		}
		if (i < (argc - 1))
			printf("Error\n");
		else
			printf("%d\n", sum);
	}
	else
		printf("Error\n");
	return (0);
}
