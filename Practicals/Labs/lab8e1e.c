#include <stdio.h>

void drawLinesWithRowCol(int rows, int cols);

int main(void)
{

	int rows, cols;

	printf("Enter rows: ");
	scanf("%d", &rows);

	printf("Enter columns: ");
	scanf("%d", &cols);

	drawLinesWithRowCol(rows, cols);

	return 0;
}

void drawLinesWithRowCol(int rows, int cols)
{

	int i, j;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
