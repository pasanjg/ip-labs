#include <stdio.h>
int main(void)
{

	int Rank, count = 1;
	float Bonus_Rate, Bonus, Basic_Salary, Final_Salary;

	while (count <= 3)
	{

		printf("Enter Basic Salary: ");
		scanf("%f", &Basic_Salary);

		printf("Enter Rank: ");
		scanf("%d", &Rank);

		switch (Rank)
		{
		case 1:
			Bonus = Basic_Salary * (5.00 / 100.00);
			Final_Salary = Basic_Salary + Bonus;
			printf("Final Salary: Rs. %.2f\n\n", Final_Salary);
			count++;
			break;

		case 2:
			Bonus = Basic_Salary * (10.00 / 100.00);
			Final_Salary = Basic_Salary + Bonus;
			printf("Final Salary: Rs. %.2f\n\n", Final_Salary);
			count++;
			break;

		case 3:
			Bonus = Basic_Salary * (15.00 / 100.00);
			Final_Salary = Basic_Salary + Bonus;
			printf("Final Salary: Rs. %.2f\n\n", Final_Salary);
			count++;
			break;

		default:
			printf("Invalid details!\n");
			break;
		}
	}

	return 0;
}
