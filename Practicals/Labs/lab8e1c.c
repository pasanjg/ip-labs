#include <stdio.h>

void drawLinesWithRows(int rows);

int main(void)
{

	int rows;

	printf("Enter rows: ");
	scanf("%d", &rows);

	drawLinesWithRows(rows);

	return 0;
}

void drawLinesWithRows(int rows)
{

	int i, j;

	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
