#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * RETURN_N - return posix
 * @value: value
 * @string: string
 * @str: param
 * Return: exit
 */
void RETURN_N(int value, char *string, char *str)
{
	dprintf(STDERR_FILENO, string, str);
	exit(value);
}
/**
 * main - cp files
 * @argc: argument count
 * @argv: array argument
 * Return: success and fail
 */
int main(int argc, char *argv[])
{
	int dest;
	int src;
	int _strlen;
	char buf[1024];

	if (argc != 3)
		RETURN_N(97, "Usage: cp file_from file_to\n", "");
	src = open(argv[1], O_RDONLY);
	if (src == -1)
		RETURN_N(98, "Error: Can't read from file %s\n", argv[1]);
	_strlen = read(src, buf, 1024);
	dest = open(argv[2], O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		RETURN_N(99, "Error: Can't write to %s\n", argv[2]);
	while (_strlen != 0)
	{
		if (write(dest, buf, _strlen) != _strlen)
			RETURN_N(99, "Error: Can't write to %s\n", argv[2]);
		_strlen = read(src, buf, 1024);
		if (_strlen == -1)
			RETURN_N(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(src) == -1)
		RETURN_N(100, "Error: Can't close fd %s\n", "-1");
	if (close(dest) == -1)
		RETURN_N(100, "Error: Can't close fd %s\n", "-1");
	return (0);
}
