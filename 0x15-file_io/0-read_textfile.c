#include "main.h"

/**
 * read_textfile - reads a textfile and prints to POSIX standard output
 * @filename: file to read
 * @letters: number of letters
 * Return: number of letters or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, length, close_result, write_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	length = read(file_descriptor, buffer, letters);

	close_result = close(file_descriptor);
	if (close_result != 0)
		exit(EXIT_FAILURE);

	write_result = write(STDOUT_FILENO, buffer, length);
	if (write_result != length)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (length);

}
