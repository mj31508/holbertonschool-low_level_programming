#include "holberton.h"
/**
 * main - main int function
 * @argc: argument count
 * @argv: argument vector array
 * Return: -1 on failure
 **/
int main(int argc, char **argv)
{
	char Buffer[BUFF_SIZE];
	int open_from, open_to, fd_write, fd_read, close_from, close_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	open_from = open(argv[1], O_RDONLY);
	if (open_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	open_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (open_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			 argv[2]), exit(99);
	fd_read = read(open_from, Buffer, BUFF_SIZE);
	if (fd_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			 argv[1]), exit(98);
	while (fd_read > 0)
	{
		fd_write = write(open_to, Buffer, fd_read);
		if (fd_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]), exit(99);
			fd_read = read(open_from, Buffer, BUFF_SIZE);
			if (fd_read == -1)
				dprintf(STDERR_FILENO, "Error: Can't read from file
 s\n", argv[1]), exit(98);
	}
	close_from = close(open_from);
	if (close_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_from);
	exit(100);
	close_to = close(open_to);
	if (close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", open_from);
	exit(100);
	return (0);
}
