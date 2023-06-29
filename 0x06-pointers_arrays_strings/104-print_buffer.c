#include <stdio.h>

/**
 * print_buffer - entry
 * Description: prints a buffer
 * @b: the buffer input
 * @size: byte limit
 */

void print_buffer(char *b, int size)
{
	int lineStart, bytePos;

	for (lineStart = 0; lineStart < size; lineStart += 10)
	{
		printf("%08x: ", lineStart);
		for (bytePos = 0; bytePos < 10; bytePos++)
		{
			if (lineStart + bytePos < size)
				printf("%02x", b[lineStart + bytePos]);
			else
				printf("  ");
			if (bytePos % 2 != 0)
				putchar(' ');
		}
		for (bytePos = 0; bytePos < 10; bytePos++)
		{
			if (lineStart + bytePos < size)
				putchar(b[lineStart + bytePos] < ' ' ? '.' : b[lineStart + bytePos]);
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}

