#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"
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
		return (__RETURN__(97, "Usage: cp file_from file_to"));
	if (argv[1] == NULL)
		return (__RETURN__(98, "Error: Can't read from file"));
	if (argv[2] == NULL)
		return (__RETURN__(99, "Erro\r: Can't write to file"));
	src = open(argv[1], O_RDONLY, 0600);
	if (src == -1)
		return (__RETURN__(98, "Error: Can't read from file NAME_OF_THE_FILE"));
	_strlen = read(src, buf, 1024);
	if (_strlen == -1)
		return (__RETURN__(98, "Error: Can't read from file"));
	dest = open(argv[2], O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0600);
	if (dest == -1)
		return (__RETURN__(99, "Error: Can't write to NAME_OF_THE_FILE"));
	while (_strlen != 0)
	{
		if (write(dest, buf, _strlen) != _strlen)
			return (__RETURN__(99, "Error: Can't write to"));
		_strlen = read(src, buf, 1024);
		if (_strlen == -1)
			return (__RETURN__(98, "Error: Can't read from file"));
	}
	close(src);
	close(dest);
	return (0);
}
