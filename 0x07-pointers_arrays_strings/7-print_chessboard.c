#include "holberton.h"
/**
 * print_chessboard - print chessboard
 * @a: data chessboard
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		j = 0;
		_putchar(10);
	}
}
