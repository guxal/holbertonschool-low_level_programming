#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * _sstrlen - string length
 * @str: string
 * Return: integer
 */
int _sstrlen(char *str)
{
	int count = 0;

	while (str[count])
	++count;
	return (count);
}
/**
 * create_file - new file
 * @filename: name
 * @text_content: text_content
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int _strlen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		_strlen = _sstrlen(text_content);
		if (write(fd, text_content, _strlen) != _strlen)
		{
			return (-1);
		}
	}

	close(fd);
	return (1);
}
