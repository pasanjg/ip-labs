#include <stdio.h>
#include <assert.h>

int qualityPoints(float avg);
void testQualityPoints();

int main(void)
{
	float avg;

	printf("Enter avgerage mark: ");
	scanf("%f", &avg);

	printf("Your point is %d\n", qualityPoints(avg));

	testQualityPoints();

	return 0;
}

int qualityPoints(float avg)
{
	if (avg <= 100 && avg >= 90)
		return 4;

	else if (avg <= 89 && avg >= 80)
		return 3;

	else if (avg <= 79 && avg >= 70)
		return 2;

	else if (avg <= 69 && avg >= 60)
		return 1;

	else
		return 0;
}

void testQualityPoints()
{
	assert(qualityPoints(95) == 4);
	assert(qualityPoints(85) == 3);
	assert(qualityPoints(75) == 2);
	assert(qualityPoints(65) == 1);
	assert(qualityPoints(40) == 0);

	// boundary conditions
	assert(qualityPoints(100) == 4);
	assert(qualityPoints(89) == 3);
	assert(qualityPoints(79) == 2);
	assert(qualityPoints(69) == 1);
	assert(qualityPoints(59) == 0);

	assert(qualityPoints(90) == 4);
	assert(qualityPoints(80) == 3);
	assert(qualityPoints(70) == 2);
	assert(qualityPoints(60) == 1);
	assert(qualityPoints(59) == 0);
}
