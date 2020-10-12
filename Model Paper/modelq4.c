#include <stdio.h>

float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main(void)
{
	float basicSalary, increment;
	int grade;

	printf("Enter salary: ");
	scanf("%f", &basicSalary);

	printf("Enter grade: ");
	scanf("%d", &grade);

	increment = calculateIncrement(grade, basicSalary);

	printf("Increment: %.2f\n", increment);

	printf("Total Salary: %.2f\n", calcTotSalary(basicSalary, increment));

	return 0;
}

float calculateIncrement(int grade, float basicSalary)
{
	if (grade == 1)
		return basicSalary * 0.1;

	else if (grade == 2)
		return basicSalary * 0.15;

	else if (grade == 3)
		return basicSalary * 0.2;

	else
		return 0;
}

float calcTotSalary(float salary, float increment)
{
	return salary + increment;
}
