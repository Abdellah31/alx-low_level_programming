#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: r- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fl;
	ssize_t w;
	ssize_t p;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	p = read(fl, buf, letters);
	r = write(STDOUT_FILENO, buf, p);

	free(buf);
	close(fl);
	return (r);
}
