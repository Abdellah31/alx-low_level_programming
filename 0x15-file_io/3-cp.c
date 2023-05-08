#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_dfl(char *file);
void clos_file(int fd);
/**
 * create_dfl - Allocates 1024 bytes for a buffer.
 * @file: The name of the file dfl  is storing chars for.
 *
 * Return: A pointer to the newly-allocated dfl.
 */
char *create_dfl(char *file)
{
char *dfl;
dfl = malloc(sizeof(char) * 1024);

	if (dfl == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (dfl);
}

/**
 * clos_file - Closs file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int lk;

	lk = close(fd);

	if (lk == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @mkls: The number of arguments supplied to the program.
 * @arg: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int mkls, char *arg[])
{
	int from, yu, n, xc;
	char *dfl;


	if (mkls != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	dfl = create_dfl(arg[2]);
	from = open(arg[1], O_RDONLY);
	n = read(from, dfl, 1024);
	yu = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arg[1]);
			free(dfl);
			exit(98);
		}

		xc = write(yu, dfl, n);
		if (yu == -1 || xc == -1)
		{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", arg[2]);
			free(dfl);
			exit(99);
		}
		n = read(from, dfl, 1024);
		yu = open(argv[2], O_WRONLY | O_APPEND);
	} while (n > 0);
	free(dfl);
	clos_file(from);
	clos_file(yu);
	return (0);
}
