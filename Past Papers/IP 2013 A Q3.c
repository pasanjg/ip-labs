#include <stdio.h>
#include <string.h>

int main(void)
{
	char item[5], ans;
	float price, discount, total = 0;
	int qty;

	do
	{

		printf("Enter food item: ");
		scanf("%s", item);

		printf("Enter quantity: ");
		scanf("%d", &qty);

		if (item == "AK012")
		{
			price = 120 * qty;
			discount = price * 0.02;
			price = price - discount;
		}

		else if (item == "AK013")
		{
			price = 350 * qty;
			discount = price * 0.03;
			price = price - discount;
		}

		else if (item == "AK014")
		{
			price = 350 * qty;
			discount = price * 0.03;
			price = price - discount;
		}

		else if (item == "AK015")
		{
			price = 250 * qty;
			discount = price * 0.05;
			price = price - discount;
		}

		else
			printf("Invalid Food Item\n");

		total += price;

		printf("Do you have more data? ");
		scanf(" %c", &ans);

	}

	while (ans == 'y' || ans == 'Y');

	printf("Total price is %.2f\n", price);

	return 0;
}
