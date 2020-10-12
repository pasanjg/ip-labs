#include <stdio.h>

float getDiscountPrice(int noOfGuests, float chargePerGuest);
float getAmount(int noOfGuests, float chargePerGuest, float discount);

int main(void)
{

	int noOfGuests;
	float chargePerGuest, discount, totAmount;

	printf("Enter no of guests: ");
	scanf("%d", &noOfGuests);

	printf("Enter charge per guest: ");
	scanf("%f", &chargePerGuest);

	discount = getDiscountPrice(noOfGuests, chargePerGuest);
	totAmount = getAmount(noOfGuests, chargePerGuest, discount);

	printf("Discount: %.2f\n", discount);
	printf("Amount to be paid: %.2f\n", totAmount);

	return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest)
{

	float hotelCharge;

	hotelCharge = noOfGuests * chargePerGuest;

	if (noOfGuests > 200)
		return hotelCharge * 0.1;

	else
		return 0;
}

float getAmount(int noOfGuests, float chargePerGuest, float discount)
{

	return (noOfGuests * chargePerGuest) - discount;
}
