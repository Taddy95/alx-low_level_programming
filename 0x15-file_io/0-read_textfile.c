#include "main.h"
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len;
	int file;
	char *text;

	if (!filename)
	{
		return (0);
	}
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	len = read(file, text, sizeof(char) * letters);
	if (len == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	len = write(STDOUT_FILENO, text, len);
	if (len == -1)
	{
		free(text);
		close(file);
		return (0);
	}
	free(text);
	close(file);
	return (len);
}
