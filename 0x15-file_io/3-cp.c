#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

/**
 * exit_error - verify if the files have been well closed
 * @i: value return after the function close
 */
void exit_error(int *i)
{
	int t, j;

	j = *i;
	t = close(*i);
	if (t == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d", j);
		exit(100);
	}
}
/**
 * main - Copy the content of a file to anothor file
 * @argc: number of arguments passed to the program
 * @args: array containing all arguments
 *
 * Return: 0 if success
 * otherwise 97, 98, 99 and 100
 */
int main(int argc, char *args[])
{
	int op1, cr, wr, rd;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	op1 = open(args[1], O_RDONLY, 0);
	if (op1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s", args[1]);
		exit(98);
	}
	cr = creat(args[2], 0664);
	if (cr == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s", args[2]);
		exit(99);
	}
	rd = read(op1, buf, BUFSIZ);
	while (rd > 0)
	{
		wr = write(cr, buf, rd);
		if (wr != rd)
		{
			dprintf(STDOUT_FILENO, "Error: Can't write to %s", args[2]);
			exit(99);
		}
		rd = wr;
	}
	exit_error(&op1);
	exit_error(&cr);
	return (0);
}
