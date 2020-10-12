#include <stdio.h>

int sum(int n);

int main(void)
{
	int num;

	printf("Enter number: ");
	scanf("%d", &num);

	printf("Sum is %d\n", sum(num));

	return 0;
}

int sum(int n)
{
	if (n == 0)
		return 0;

	else
		return n + sum(n - 1);
}
