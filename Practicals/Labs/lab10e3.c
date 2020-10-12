#include <stdio.h>
int main(void)
{
	int employee[9] = {0};
	int i = 0, salary;

	printf("Enter salary: ");
	scanf("%d", &salary);

	while (salary != -1)
	{
		if ((salary >= 200) && (salary <= 299))
		{
			employee[0] = employee[0] + 1;
		}

		else if ((salary >= 300) && (salary <= 399))
		{
			employee[1] = employee[1] + 1;
		}

		else if ((salary >= 400) && (salary <= 499))
		{
			employee[2] = employee[2] + 1;
		}

		else if ((salary >= 500) && (salary <= 599))
		{
			employee[3] = employee[3] + 1;
		}

		else if ((salary >= 600) && (salary <= 699))
		{
			employee[4] = employee[4] + 1;
		}

		else if ((salary >= 700) && (salary <= 799))
		{
			employee[5] = employee[5] + 1;
		}

		else if ((salary >= 800) && (salary <= 899))
		{
			employee[6] = employee[6] + 1;
		}

		else if ((salary >= 900) && (salary <= 999))
		{
			employee[7] = employee[7] + 1;
		}

		else if ((salary >= 1000) && (salary <= 1500))
		{
			employee[8] = employee[8] + 1;
		}

		else
			printf("Invalid amount!\n");

		printf("Enter salary: ");
		scanf("%d", &salary);
	}

	for (i = 0; i < 9; i++)
	{
		if (i <= 7)
		{
			printf("No of employees in range $%d00 - $%d99 : %d\n", i + 2, i + 2, employee[i]);
		}

		else
			printf("No of employees in range %d00 and above : %d\n", i + 2, employee[i]);
	}

	return 0;
}
