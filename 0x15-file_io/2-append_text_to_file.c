#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: name of file
 * @text_content: text to add
 *
 * Return: 1 Success
 * otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (text_content)
		for (i = 0; text_content[i]; i++)
			;
	else if(filename == NULL || op == -1)
		return (-1);
	wr = write(op, text_content, i);
	if (wr == -1)
	{
		close(op);
		return (-1);
	}
	close(op);
	return (1);
}
