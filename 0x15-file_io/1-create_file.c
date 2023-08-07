#include "main.h"

/**
 * create_file - Create a file and writes text content to it
 * @filenam: The name of the file to create
 * @text_content: A NULL-terminated strig to write to the file
 * Return: 1 or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, length, write_result, close_result;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		length = 0;
		while (text_content[length] != '\0')
			length += 1;

		write_result = write(file_descriptor, text_content, length);
		if (write_result != length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close_result =  close(file_descriptor);
	if (close_result == -1)
		exit(EXIT_FAILURE);

	return(1);
}
