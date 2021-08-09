#include "main.h"
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - length of a string
 * @s: input char
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * create_file - check the code
 * @filename: file to create.
 * @text_content: info to write into the file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;

	if (filename == NULL)
	{
		return (1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		len = write(fd, text_content, _strlen(text_content));
		if (len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
