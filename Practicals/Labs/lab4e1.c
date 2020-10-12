#include <stdio.h>
int main(void)
{

	int num = 0;

	while (num >= 0)
	{
		printf("Enter number: ");
		scanf("%d", &num);

		if (num % 2 == 0)
		{
			printf("Even\n");
		}

		else
		{
			printf("Odd\n");
		}
	}

	printf("Program Terminated!\n");

	return 0;
}
