#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * append_text_to_file - creating a file with the O_CREAT flag
 * @filename: the name of the file that will be created
 * @text_content: Name of the written file
 *
 *
 * Return: retun -1 on failure or 1 on success
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int c_open;
	int c_write;
	int i;

	if (filename == NULL)
		return (-1);

	c_open = open(filename, O_WRONLY | O_APPEND);
	if (c_open == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	i = 0;
	while (text_content[i] != '\0')
	{
		i++;
	}
	c_write = write(c_open, text_content, i);
	if (c_write == -1)
		return (-1);
	close(c_open);
	return (1);
}
