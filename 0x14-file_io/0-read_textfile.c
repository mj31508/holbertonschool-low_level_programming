#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_this;
	int fd;
	ssize_t r_result;
	ssize_t w_result;
	ssize_t c_close;

	print_this = malloc(sizeof(char) * letters);

	if (print_this == '\0')
		return ('\0');

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);
	r_result = read(fd, print_this, letters);
	if (r_result == -1)
		return (-1);
	w_result = write(STDOUT_FILENO, print_this, r_result);

	c_close = close(fd);

	if (w_result == -1 || c_close == -1)
		return (-1);
	return (r_result);

}
