#include <stdio.h>
int main(void)
{
	double salaries[5] = {-1};
	double salary;

	for (int i = 0; i < 5;)
	{
		printf("Input the salary of employee %d: ", i + 1);
		scanf("%lf", &salary);

		if (salary >= 0)
		{
			salaries[i] = salary;
			i++;
		}

		else
		{
			printf("Please re-enter the amout\n");
		}
	}

	puts("");

	for (int i = 0; i < 5; i++)
	{
		if (salaries[i] < 10000)
		{
			salaries[i] = (salaries[i] * 0.1) + salaries[i];
		}
	}

	printf("%s\t\t%s\n", "Employee number", "Salary");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t\t\t%.2lf", i + 1, salaries[i]);
		puts("");
	}

	puts("");

	return 0;
}
