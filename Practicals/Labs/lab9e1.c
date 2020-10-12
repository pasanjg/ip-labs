#include <stdio.h>

int multiple(int num1, int num2);

int main(void)
{
	int num1, num2, ans;

	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	ans = multiple(num1, num2);

	if (ans == 0)
		printf("%d is a multiple of %d\n", num2, num1);

	else
		printf("%d is not a multiple of %d\n", num2, num1);

	return 0;
}

int multiple(int num1, int num2)
{
	int result;

	result = num1 % num2;

	return result;
}
