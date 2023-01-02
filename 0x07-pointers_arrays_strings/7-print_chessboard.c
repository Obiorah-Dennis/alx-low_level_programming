#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	char chessboard[8][8];

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				chessboard[i][j] = 'B';
			}
			else
			{
				chessboard[i][j] = 'W';
			}
		}
	}
	/* Print the chessboard */
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			printf("%c ", chessboard[i][j]);
		}
		printf("\n");
	}
}

