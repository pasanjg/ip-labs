#include <stdio.h>
#include <string.h>

int main(void)
{
	int nSt, nEx, total;
	float avg = 0;

	printf("Enter the no of students: ");
	scanf("%d", &nSt);

	printf("Enter the no of exams: ");
	scanf("%d", &nEx);

	int score[nSt][nEx];

	for (int i = 0; i < nSt; i++)
	{
		printf("Student %d\n", i + 1);
		for (int j = 0; j < nEx; j++)
		{
			printf("Enter score %d: ", j + 1);
			scanf("%d", &score[i][j]);
		}
	}

	printf("Student\tExam Scores\t Average\n");

	for (int i = 0; i < nSt; i++)
	{
		printf("%d\t", i + 1);
		total = 0;
		for (int j = 0; j < nEx; j++)
		{
			total += score[i][j];
			printf("%d\t", score[i][j]);
		}
		avg = total / nEx;
		printf("%.2f\n", avg);
	}

	return 0;
}