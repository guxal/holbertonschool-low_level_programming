#ifndef HOLBERTON_H
#define HOLBERTON_H
#define __RETURN__(value, str) \
	(__extension__ \
	 ({ \
	  printf("%s\n", str); \
	  value; \
	  }))
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* HOLBERTON_H */
