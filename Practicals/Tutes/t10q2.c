#include <stdio.h>

int main(void)
{
	float marks[15] = {0};
	float mark, sum, mean;
	int i;

	for (i = 0; i < 15;)
	{
		printf("Enter marks: ");
		scanf("%f", &mark);

		if (mark >= 0 && mark <= 20)
		{
			marks[i] = mark;
			i++;
		}
	}

	for (i = 0; i < 15; i++)
	{
		sum += marks[i];
	}

	printf("Mean is %.2f\n", sum / 15.00);

	return 0;
}
