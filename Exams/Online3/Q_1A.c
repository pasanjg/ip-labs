#include <stdio.h>
int main(void)
{

	float basicSal, com, totalSal;
	int pos, sales;

	printf("Enter the Executive Position: ");
	scanf("%d", &pos);

	printf("Enter Sales, Rs: ");
	scanf("%d", &sales);

	if (pos == 1)
	{
		if (sales >= 4000)
		{
			com = 50000 * 0.19;
			totalSal = 50000 + com;
			printf("Commission is Rs: %.2f\n", com);
			printf("Total salary is Rs: %.2f\n", totalSal);
		}

		else if (sales >= 3000)
		{
			com = 50000 * 0.12;
			totalSal = 50000 + com;
			printf("Commission is Rs: %.2f\n", com);
			printf("Total salary is Rs: %.2f\n", totalSal);
		}

		else
		{
			com = 0;
			totalSal = 50000;
			printf("Commission is Rs: %.2f\n", com);
			printf("Total salary is Rs: %.2f\n", totalSal);
		}
	}

	else if (pos == 2)
	{
		if (sales >= 4000)
		{
			com = 75000 * 0.19;
			totalSal = 75000 + com;
			printf("Commission is Rs: %.2f\n", com);
			printf("Total salary is Rs: %.2f\n", totalSal);
		}

		else if (sales >= 3000)
		{
			com = 75000 * 0.12;
			totalSal = 75000 + com;
			printf("Commission is Rs: %.2f\n", com);
			printf("Total salary is Rs: %.2f\n", totalSal);
		}

		else
		{
			com = 0;
			totalSal = 75000;
			printf("Commission is Rs: %.2f\n", com);
			printf("Total salary is Rs: %.2f\n", totalSal);
		}
	}

	else
	{
		printf("Invalid position\n");
	}

	return 0;
}
