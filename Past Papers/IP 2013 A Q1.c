#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float findAvailableBalance(float creditLimit, float amountUsed);
float purchase(float amount, float availableAmount);
void display(int cardNo, char cardType[], float availableAmount);

int main()
{
	int cardNo;
	char cardType[8];
	float availableAmount, amount;
	float creditLimit, amountUsed = 0;

	printf("Enter card no: ");
	scanf("%d", &cardNo);

	printf("Enter card type: ");
	scanf("%s", &cardType);

	printf("Enter credit limit: ");
	scanf("%f", &creditLimit);

	printf("Enter purchase amount: ");
	scanf("%f", &amount);

	availableAmount = findAvailableBalance(creditLimit, amountUsed);

	availableAmount = purchase(amount, availableAmount);

	display(cardNo, cardType, availableAmount);

	return 0;
}

float findAvailableBalance(float creditLimit, float amountUsed)
{
	return creditLimit - amountUsed;
}

float purchase(float amount, float availableAmount)
{
	if (amount <= availableAmount)
	{
		printf("Transaction sucessful!\n");
		availableAmount -= amount;
	}

	else
	{
		printf("Transaction failed!\n");
	}

	return availableAmount;
}

void display(int cardNo, char cardType[], float availableAmount)
{
	printf("Credit card No:\t: %d\n", cardNo);
	printf("Credit card type\t: %s\n", cardType);
	printf("Available Amount\t: %.2f\n", availableAmount);
}
