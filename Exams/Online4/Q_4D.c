#include <stdio.h>

// function prototypes
float calculateTotalCost(int itemNo, int quantity);
void printDetails(int itemNo, int quantity, float totalCost);

int main(void)
{ // start function main

	// declaring variables
	int itemNo, quantity;
	float totalCost;

	// prompt for user input
	printf("Enter Item No: ");
	scanf("%d", &itemNo);

	printf("Enter quantity: ");
	scanf("%d", &quantity);

	// calculation
	totalCost = calculateTotalCost(itemNo, quantity);
	printDetails(itemNo, quantity, totalCost);

	return 0;

} // end function main

float calculateTotalCost(int itemNo, int quantity)
{ // start function calculateTotalCost

	// declaring variables
	float totalCost;

	// checking condition
	if (itemNo == 1)
		totalCost = quantity * 100.00;

	if (itemNo == 2)
		totalCost = quantity * 200.00;

	if (itemNo == 3)
		totalCost = quantity * 300.00;

	return totalCost;

} // end function calculateTotalCost

void printDetails(int itemNo, int quantity, float totalCost)
{ // start function printDetails

	// writing output
	puts("");
	printf("Details:\nQuantity: %d\nItem No: %d\nTotal Cost: %.2f\n", quantity, itemNo, totalCost);

} // end function printDetails
