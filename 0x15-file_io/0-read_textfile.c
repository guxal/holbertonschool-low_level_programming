#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * _strlen - str length
 * @str: string
 * Return: integer length
 */
int _strlen(char *str)
{
	int count = 0;

	while (str[count])
		++count;

	return (count);
}
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

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		printf("Failed to open and read the file\n");
		exit(1);
	}
	buf = malloc((sizeof(char) * letters) - 1);
	if (buf == NULL)
		return (0);

	read(fd, buf, letters);

	close(fd);

	printf("%s\n", buf);

	return (_strlen(buf));
}
