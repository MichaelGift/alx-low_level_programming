#include "main.h"
/**
 * print_chessboard - prints a chessboard, yes
 * @a: 2d array for  lenght width
 */
void print_chessboard(char (*a)[8])
{
	int l, w;

	for (l = 0; l < 8; l++)
	{
		for (w = 0; w < 8; w++)
			_putchar(a[l][w]);
		_putchar('\n');
	}
}

