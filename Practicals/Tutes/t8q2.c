#include <stdio.h>
#include <math.h>

void quadRoots(float a, float b, float c);

int main(void)
{
	float a, b, c;
	float x1, x2;

	puts("\nWhen f(x) = ax^2 + bx + c = 0,\nFind the roots of 'f(x)'\n");

	printf("Enter value for 'a': ");
	scanf("%f", &a);

	printf("Enter value for 'b': ");
	scanf("%f", &b);

	printf("Enter value for 'c': ");
	scanf("%f", &c);

	puts("");

	quadRoots(a, b, c);

	return 0;
}

void quadRoots(float a, float b, float c)
{
	float x1, x2;

	x1 = ((-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a);
	x2 = ((-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a);

	printf("The roots:\nX1 = %.2f\nX2 = %.2f\n\n", x1, x2);
}
