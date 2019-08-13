#include <stdio.h>

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * read_textfile - read textfile
 * @filename: filename open
 * @letters: letters copy of the buffer
 * Return: numbers of the bytes copy
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int _strlen;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc((sizeof(char) * letters) - 1);
	if (buf == NULL)
		return (0);
	_strlen = read(fd, buf, letters);
	close(fd);
	if (write(STDOUT_FILENO, buf, _strlen) != _strlen)
		return (0);
	return (_strlen);
}
