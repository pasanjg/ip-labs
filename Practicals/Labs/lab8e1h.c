#include <stdio.h>

void drawLinesWithRowCol(int rows, int cols, char character);

int main(void)
{

	int rows, cols;
	char character;

	printf("Enter rows: ");
	scanf("%d", &rows);

	printf("Enter columns: ");
	scanf("%d", &cols);

	printf("Enter character: ");
	scanf(" %c", &character);

	drawLinesWithRowCol(rows, cols, character);

	return 0;
}

void drawLinesWithRowCol(int rows, int cols, char character)
{

	int i, j;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= cols; j++)
		{
			printf("%c", character);
		}
		printf("\n");
	}
}
