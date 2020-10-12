#include <stdio.h>
int main(void)
{

	int num, a, b, c, d;

	printf("Enter a 5 digit number: ");
	scanf("%d", &num);

	if ((num / 10000 == num % 10) && ((num / 1000) % 10 == (num % 100) / 10))
	{
		printf("Plaindrome\n");
	}

	return 0;
}
