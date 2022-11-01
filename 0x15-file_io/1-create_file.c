#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content written in the file
 * Return: 1 if success, -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fn, i;
	int rw;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	for (i = 0; text_content[i]; i++)
		;

	rw = write(fn, text_content, i);

	if (rw == -1)
		return (-1);
	close(fn);

	return (1);
}
