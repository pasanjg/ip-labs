#include <stdio.h>
int main(void)
{
	int row, col, rows, cols;

	printf("Enter no of rows of the matrices: ");
	scanf("%d", &rows);

	printf("Enter no of columns of the matrices : ");
	scanf("%d", &cols);

	int mat1[rows][cols];
	int mat2[rows][cols];

	puts("");
	puts("Matrix 1");
	puts("--------");

	for (row = 0; row < rows; row++)
	{
		for (col = 0; col < cols; col++)
		{
			printf("Enter value for row %d column %d: ", row + 1, col + 1);
			scanf("%d", &mat1[row][col]);
		}
	}

	puts("");
	puts("Matrix 2");
	puts("--------");

	for (row = 0; row < rows; row++)
	{
		for (col = 0; col < cols; col++)
		{
			printf("Enter value for row %d column %d: ", row + 1, col + 1);
			scanf("%d", &mat2[row][col]);
		}
	}

	puts("");
	puts("Addition: ");
	puts("");

	// writing output
	for (row = 0; row < rows; row++)
	{
		for (col = 0; col < cols; col++)
		{
			printf("%d\t", mat1[row][col] + mat2[row][col]);
		}

		puts("");
	}

	puts("");

	return 0;
}
