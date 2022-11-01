#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fn, i;
	long int n;
	char *buf;

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fn = open(filename, O_RDONLY);

	if (fn == -1)
		return (0);

	n = read(fn, buf, letters);
	close(fn);
	if (n == -1)
		return (0);
	buf[letters] = '\0';

	i = write(STDOUT_FILENO, buf, n);
	free(buf);
	if (i == -1)
		return (0);

	return (n);
}

