#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of file read
 * @letters: number of letters to read and print
 *
 * Return: (s) actual number of letters it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t s;
	ssize_t r;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buffer, letters);
	s = write(STDOUT_FILENO, buffer, r);

	free(buffer);
	close(fd);
	return (s);
}
