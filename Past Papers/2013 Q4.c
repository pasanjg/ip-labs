#include <stdio.h>
#include <string.h>
//Question 4 | Final4_2.c

void inputData(int data[][4], int rowSize, int colSize);
int findHighestStudent(int data[][4], int rowSize, int colSize, int moduleID);

int main(void)
{
	int data[4][4];

	inputData(data, 4, 4);
	printf("Highest for 1002 is from Student %d\n", findHighestStudent(data, 4, 4, 1002));
	printf("Highest for 1003 is from Student %d\n", findHighestStudent(data, 4, 4, 1003));

	return 0;
}

void inputData(int data[][4], int rowSize, int colSize)
{
	for (int col = 0; col < colSize; col++)
	{
		printf("Module 100%d\n", col);

		for (int row = 0; row < rowSize; row++)
		{
			printf("Enter Marks for Student %d: ", row + 1);
			scanf("%d", &data[row][col]);
		}
	}
}

int findHighestStudent(int data[][4], int rowSize, int colSize, int moduleID)
{
	int max, i, st = 0;

	if (moduleID == 1002)
	{
		max = data[0][2];

		for (int i = 0; i < colSize; i++)
		{
			if (data[i][2] >= max)
			{
				max = data[i][3];
				st = i + 1;
			}
		}
		return st;
	}

	if (moduleID == 1003)
	{
		int max = data[0][3];

		for (i = 0; i < colSize; i++)
		{
			if (data[i][3] >= max)
			{
				max = data[i][3];
				st = i + 1;
			}
		}
		return st;
	}
}
