#include <stdio.h>
int main(void)
{

	// declaring variables
	int num1, num2;
	char oper;

	// obtaining user inputs
	printf("Enter number 1: ");
	scanf("%d", &num1);

	printf("Enter number 2: ");
	scanf("%d", &num2);

	printf("Enter operation: ");
	scanf(" %c", &oper);

	//validating the decision
	switch (oper)
	{

	case '+':
		printf("The sum is %d\n", num1 + num2);
		break;

	case '-':
		printf("The difference is %d\n", num1 - num2);
		break;

	case '*':
		printf("The product is %d\n", num1 * num2);
		break;

	case '/':
		printf("The ratio is %.2f\n", (float)num1 / (float)num2);
		break;

	} //end switch

	return 0;

} // end main
