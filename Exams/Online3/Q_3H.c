#include <stdio.h>
int main(void)
{

	int itemNo, qty;
	float price, total = 0.00;

	printf("Enter Item\t: ");
	scanf("%d", &itemNo);

	while (itemNo != -99)
	{
		printf("Enter Quantity\t: ");
		scanf("%d", &qty);
		puts("");

		switch (itemNo)
		{
		case 1:
			price = 30.00 * qty;
			total += price;
			break;

		case 2:
			price = 45.00 * qty;
			total += price;
			break;

		case 3:
			price = 55.00 * qty;
			total += price;
			break;

		default:
			printf("Invalid Item number!\n");
			break;
		}

		printf("Enter Item\t: ");
		scanf("%d", &itemNo);
	}

	printf("Total Price to pay Rs: %.2f\n", total);

	return 0;
}
