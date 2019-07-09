#include "holberton.h"
/**
 * print_chessboard - print chessboard
 * @a: data chessboard
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j = 8;

	for (i = 0; i < 8; i++)
	{
		while (j--)
			_putchar(a[i][j]);
		j = 8;
		_putchar(10);
	}
}
