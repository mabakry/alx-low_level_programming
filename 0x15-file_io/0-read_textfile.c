#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: pointer to a text file
 * @letters: number of letters it should read and print
 * Return:  actual number of letters it could read and print
 * 0 if the file can not be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buffer;
	ssize_t x,y;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	x = read(f, buffer, letters);
	y = write(1, buffer, x);

	free(buffer);
	close(f);
	return (y);
}
