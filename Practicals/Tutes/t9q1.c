#include <stdio.h>

float calculateCharges(float hours);

int main(void)
{
	int cus1, cus2, cus3;
	float hour1, hour2, hour3, total, charge1, charge2, charge3, charge;

	printf("Enter costomer: ");
	scanf("%d", &cus1);

	printf("Enter hours: ");
	scanf("%f", &hour1);

	total += hour1;
	charge1 = calculateCharges(hour1);

	printf("Enter costomer: ");
	scanf("%d", &cus2);

	printf("Enter hours: ");
	scanf("%f", &hour2);

	total += hour2;
	charge2 = calculateCharges(hour2);

	printf("Enter costomer: ");
	scanf("%d", &cus3);

	printf("Enter hours: ");
	scanf("%f", &hour3);

	total += hour3;
	charge3 = calculateCharges(hour3);

	charge = charge1 + charge2 + charge3;

	printf("Car\tHours\tCharge\n");

	printf("%d\t%.1f\t%.2f\n%d\t%.1f\t%.2f\n%d\t%.1f\t%.2f\nTotal\t%.1f\t%.2f\n", cus1, hour1, charge1, cus2, hour2, charge2, cus3, hour3, charge3, total, charge);

	return 0;
}

float calculateCharges(float hours)
{
	if (hours <= 3)
		return 2.00;

	else if (hours == 24)
		return 10.00;

	else
		return ((2.00) + (hours - 3) * 0.5);
}
