#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
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
		return (-1);
	src = open(argv[1], O_RDONLY, 0600);
	if (src == -1)
		return (-1);
	_strlen = read(src, buf, 1024);
	close(src);
	printf("%s\n", buf);
	printf("%d\n", _strlen);
	dest = open(argv[2], O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0600);
	if (dest == -1)
		return (-1);
	if (write(dest, buf, _strlen) != _strlen)
		return (-1);
	close(dest);
	return (1);
}
