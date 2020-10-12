#include <stdio.h>
int main(void)
{

	int type;
	float price;
	int qty;

	printf("Enter your type: ");
	scanf("%d", &type);

	while (type != -1)
	{

		if (type == 1)
		{
			printf("Enter Quantity: ");
			scanf(" %d", &qty);

			if (qty <= 3)
			{
				price = 1000 * qty;
				printf("Total price: %.2f\n", price);
			}

			else
			{
				price = (1000 * qty) - (1000 * qty * 0.1);
				printf("Total Price is: %.2f\n", price);
			}
		}

		else if (type == 2)
		{
			printf("Enter Quantity: ");
			scanf(" %d", &qty);

			if (qty <= 3)
			{
				price = 1600 * qty;
				printf("Total price: %.2f\n", price);
			}

			else
			{
				price = (1600 * qty) - (1600 * qty * 0.12);
				printf("Total Price is: %.2f\n", price);
			}
		}

		else if (type == 3)
		{
			printf("Enter Quantity: ");
			scanf(" %d", &qty);

			if (qty <= 3)
			{
				price = 1400 * qty;
				printf("Total price: %.2f\n", price);
			}

			else
			{
				price = (1400 * qty) - (1400 * qty * 0.15);
				printf("Total Price is: %.2f\n", price);
			}
		}

		else
		{
			printf("Invalid type\n");
		}

		printf("Enter type: ");
		scanf(" %d", &type);
	}

	printf("Thank you!\n");

	return 0;
}
