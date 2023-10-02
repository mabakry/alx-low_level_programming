#include "main.h"


/**
 * _close - close file descriptors
 * @fd: file to be closed
 */

void _close(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * *_buffer - create a buffer
 * @file: name of the file of the buffer
 * Return: pointer the buffer
 */

char *_buffer(char *file)
{
	char *b;

	b = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (b);
}

/**
 * main - copies the content of a file to another file.
 * @argc: arguments number
 * @argv: arguments value
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int to, from, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = _buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				free(buf);
				exit(98);
			}

		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
			{
				dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
				free(buf);
				exit(99);
			}
		rd = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buf);
	_close(from);
	_close(to);
	return (0);
}
