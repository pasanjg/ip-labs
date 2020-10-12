#include <stdio.h>

struct phone
{
	int num;
	float local, idd, roam;
} ph1;

int main(void)
{
	FILE *cfPtr;

	float total;

	cfPtr = fopen("charges.dat", "r");

	if (cfPtr != NULL)
	{
		printf("Phone No.\tAmount due\n");

		fscanf(cfPtr, "%d\t%f\t%f\t%f", &ph1.num, &ph1.local, &ph1.idd, &ph1.roam);

		while (!feof(cfPtr))
		{
			total = ph1.local + ph1.idd + ph1.roam;

			printf("0%d\t%.2f\n", ph1.num, total);
			fscanf(cfPtr, "%d\t%f\t%f\t%f", &ph1.num, &ph1.local, &ph1.idd, &ph1.roam);
		}
	}

	else
		printf("ERROR in FILE!\n");

	fclose(cfPtr);

	return 0;
}
