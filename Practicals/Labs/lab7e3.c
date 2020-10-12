#include <stdio.h>
int main(void)
{

	int num, fac = 1, n;

	printf("Enter number: ");
	scanf("%d", &num);

	n = num;

	if (num == 0)
	{
		fac = 1;
	}

	else
	{
		for (; num > 0; num--)
		{
			fac *= num;
		}
	}

	printf("Factorial of %d is %d\n: ", n, fac);

	return 0;
}
