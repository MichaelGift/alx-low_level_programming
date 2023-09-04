#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to which to append.
 * @text_content: The NULL-terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, close_result, length;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
	close_result = close(file_descriptor);
	if (close_result == -1)
		return (-1);
	return (1);
}

