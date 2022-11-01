#include "main.h"

/**
 * apprnd_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 * Return: 1 for success, -1 if fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fn, i;
	int rw;

	if (filename == NULL)
		return (-1);

	if (fn == -1)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		rw = write(fn, text_content, i);

		if (rw == -1)
			return (-1);
	}
	close(fn);

	return (1);
}
