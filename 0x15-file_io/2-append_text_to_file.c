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
 * append_text_to_file - append_text
 * @filename: filename
 * @text_content: text
 * Return: success 1 error -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int _strlen;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	_strlen = _sstrlen(text_content);
	if (write(fd, text_content, _strlen) != _strlen)
		return (-1);

	return (1);
}
