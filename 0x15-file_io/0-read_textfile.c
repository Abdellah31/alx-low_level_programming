#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: m- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufers;
	ssize_t fl;
	ssize_t m;
	ssize_t e;

	fl = open(filename, O_RDONLY);
	if (fl == -1)
		return (0);
	bufers = malloc(sizeof(char) * letters);
	e = read(fl, bufers, letters);
	m = write(STDOUT_FILENO, bufers, e);

	free(bufers);
	close(fl);
	return (m);
}
