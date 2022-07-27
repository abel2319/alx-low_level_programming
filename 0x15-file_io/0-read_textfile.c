/**
 * read_textfile -  reads a text file and prints it to 
 * the POSIX standard output.
 * @filename: file to read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rtn = 0, n;
	int file;
	char buf[BUFSIZ];

	file = open(filename, O_RDONLY, 0)
	if (file)
		if ((n = read(file, buf, letters)))
    			write(stdout, buf, n);
	return (n)
}
