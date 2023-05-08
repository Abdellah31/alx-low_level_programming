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
char *dfl;
ssize_t C;
ssize_t M;
ssize_t A;
C = open(filename, O_RDONLY);
if (C == -1)
	return (0);
	dfl = malloc(sizeof(char) * letters);
	A = read(C, dfl, letters);
	M = write(STDOUT_FILENO, dfl, A);
	free(dfl);
	close(C);
	return (M);
}
