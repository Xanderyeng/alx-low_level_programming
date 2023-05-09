#include <stdio.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If an error occurs - exit status will be set.
 *         Otherwise - returns 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		r = read(fd_from, buffer, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		w = write(fd_to, buffer, r);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (r > 0);
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
