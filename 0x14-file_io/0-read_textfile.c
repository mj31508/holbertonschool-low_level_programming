#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - function to read from a file
 * @filename: character pointer for the file name
 * @letters: variable of size t that wll be mltiplied char
 *
 * Return: the amout of letters or -1 on failure
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_this;
	int fd;
	ssize_t r_result;
	ssize_t w_result;
	ssize_t c_close;

	letters = letters + 1;

	if (filename == NULL)
		return (0);

	print_this = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r_result = read(fd, print_this, letters);
	if (r_result == -1)
		return (-1);
	w_result = write(STDOUT_FILENO, print_this, r_result);

	if (w_result == -1)
		return (-1);

	c_close = close(fd);
	if (c_close == -1)
		return (-1);
	return (r_result);

}
