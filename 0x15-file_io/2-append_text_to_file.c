#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 * Return: 1 on success or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int countwrite;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if ((text_content == NULL) && (fd != -1))
	{
		close(fd);
		return (1);
	}
	countwrite = write(fd, text_content, _strlen(text_content));
	if (countwrite == -1 || countwrite != _strlen(text_content))
	{
		return (-1);
	}
	return (1);
}

/**
 * _strlen - function that counts characters.
 * @s: string to count its chars.
 * Return: length of string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

