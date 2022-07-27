#include "main.h"

/**
 * create_file - create a file with 600 as permission
 * @filename: name of file
 * @text_content: content of file
 *
 * Return: 1 Success
 * otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);
	if (text_content)
		for (i = 0; text_content[i]; i++)
			;
	op = open(filename, O_RDONLY | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, i);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
