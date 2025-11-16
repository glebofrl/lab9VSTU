#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9

void main()
{

	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d", col * row);

		printf("\n");
	}
	printf("\n");

	for (row = 1, col = COL; row <= ROW; ++row, col--)
	{
		for (int j = col, i = 1; j > col - row; i++, j--)
			printf("%5d", i * row);
		printf("\n");
	}
	printf("\n");

	int l;
	for (row = 5, col = 5, l = 5; row >= 0; row--, col--, l++)
	{
		for (int j = col; j > col - row; j--)
			printf("%5d", l);
		printf("\n");
	}

}
