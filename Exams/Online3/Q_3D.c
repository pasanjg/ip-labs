#include <stdio.h>
int main(void)
{

	int type, qty;
	float price;

	puts("");
	puts(" Welcome to 'Burger House'!\n Please select your favourite Burger from the Menu below.\n");
	puts(" ----------------");
	puts(" Type\t| Burger");
	puts(" ----------------");
	puts(" 1\t| Regular\n 2\t| Cheese\n 3\t| Double");
	puts(" ----------------\n");
	puts("*Enter -1 to finish the order.*\n");

	printf(" Enter Burger Type\t: ");
	scanf("%d", &type);

	while (type != -1)
	{
		printf(" Enter Quantity\t\t: ");
		scanf("%d", &qty);

		if (type == 1)
		{
			price = 500.00 * qty;
			printf(" Total Price\t      Rs: %.2f\n\n", price);
		}

		else if (type == 2)
		{
			price = (500.00 * qty) + (50.00 * qty);
			printf(" Total Price\t      Rs: %.2f\n\n", price);
		}

		else if (type == 3)
		{
			price = (500.00 * qty) + (100.00 * qty);
			printf(" Total Price\t      Rs: %.2f\n\n", price);
		}

		else
			printf(" Invalid type!\n");

		printf(" Enter Burger Type\t: ");
		scanf("%d", &type);
	}

	puts("");
	puts(" Thank you! Have a nice day.\n");

	return 0;
}
