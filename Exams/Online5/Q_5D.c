#include <stdio.h>
int main(void)
{
	// declaring variables
	int testMarks[10] = {-1};
	int mark, total, avg;

	// storing values in the array
	for (int i = 0; i < 10;)
	{
		// prompt for user input
		printf("Input mark %d: ", i + 1);
		scanf("%d", &mark);

		if (mark >= 0 && mark <= 100)
		{
			testMarks[i] = mark;
			total += testMarks[i];
			i++;
		}

		else
			printf("Re-enter\n");
	}

	avg = total / 10;

	puts("");

	// writing output
	printf("Passed marks: ");

	for (int i = 0; i < 10; i++)
	{
		if (testMarks[i] >= avg)
			printf("%d ", testMarks[i]);
	}

	puts("");

	return 0;
}
