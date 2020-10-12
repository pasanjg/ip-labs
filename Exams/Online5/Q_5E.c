#include <stdio.h>
#define SIZE 10 // constant variable value

int main(void)
{
	// declating variables
	int marks[SIZE] = {0};
	int mark, total = 0;
	float avg;
	int fail;

	// string values in the array
	for (int i = 0; i < SIZE;)
	{
		// prompt for user input
		printf("Input mark %d: ", i + 1);
		scanf("%d", &mark);

		// checking the condition
		if (mark >= 0 && mark <= 100)
		{
			marks[i] = mark;
			total += marks[i]; // calculating the total marks
			i++;
		}

		else
			printf("Re-enter\n");
	}

	puts("");

	// calculating the average marks
	avg = total / SIZE;

	// retreiving values from the array
	for (int i = 0; i < SIZE; i++)
	{
		// checking the condition
		if (marks[i] < avg)
		{
			fail += 1; // calculating the failed applicants
		}
	}

	// writing ouput
	printf("No of failed applicants: %d\n", fail);

	return 0;
}
