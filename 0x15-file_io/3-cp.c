#include "main.h"
#define BUF_SIZE 1024

/**
 * main - Entry point for the cp program.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int source_fd, dest_fd, res_read, res_write;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);
	source_fd = open(argv[1], O_RDONLY);
	check_error(source_fd, buffer, argv[1], 98);
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	check_error(dest_fd, buffer, argv[2], 99);
	do {
		res_read = read(source_fd, buffer, BUF_SIZE);
		if (res_read == 0)
			break;
		check_error(res_read, buffer, argv[1], 98);
		res_write = write(dest_fd, buffer, res_read);
		check_error(res_write, buffer, argv[2], 99);
	} while (res_write >= BUF_SIZE);
	check_error(close(dest_fd), buffer, NULL, 100);
	check_error(close(source_fd), buffer, NULL, 100);
	free(buffer);
	return (0);
}

/**
 * check_error - Checks error conditions and exits if necessary.
 * @fd: The file descriptor or return value to check.
 * @buffer: The buffer.
 * @argv: The argument.
 * @error_code: The error code to exit with.
 */
void check_error(int fd, char *buffer, char *argv, int error_code)
{
	if (fd < 0)
	{
		if (error_code == 100)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		else
			dprintf(STDERR_FILENO, "Error: Can't %s %s\n",
					(error_code == 98) ? "read from file" : "write to", argv);
		free(buffer);
		exit(error_code);
	}
}
