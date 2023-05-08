#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufs;
	ssize_t l;
	ssize_t w;
	ssize_t a;

	l = open(filename, O_RDONLY);
	if (l == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	a = read(l, bufs, letters);
	w = write(STDOUT_FILENO, bufs, a);

	free(buf);
	close(l);
	return (w);
}
