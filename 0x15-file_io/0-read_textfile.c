#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int file;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	file = open(filename, O_RDONLY, 0);
	if (file != -1 && filename)
	{
		n = read(file, buf, sizeof(char) * letters);
		if (n)
		{
			n = write(STDOUT_FILENO, buf, n);
			if (n <= 0)
			{
				n = 0;
				close(file);
			}
		}
		else
		{
			n = 0;
			close(file);
		}
	}
	return (n);
}
