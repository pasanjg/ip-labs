#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenus(double x, double y);

int main(void)
{
	double side1, side2;

	printf("Enter side 1: ");
	scanf("%lf", &side1);

	printf("Enter side 2: ");
	scanf("%lf", &side2);

	printf("Hypotenus is %.2lf\n", hypotenus(side1, side2));

	assert(hypotenus(3, 4) == 5);
	assert(hypotenus(5, 12) == 13);
	assert(hypotenus(8, 15) == 17);

	return 0;
}

double hypotenus(double x, double y)
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
