#include <stdio.h>

struct phone
{
	int num;
	float local, idd, roam, total;
} ph[5];

int main(void)
{
	FILE *cfPtr;

	int i;
	int num;
	float local, idd, roam;

	cfPtr = fopen("charges.dat", "r");

	if (cfPtr != NULL)
	{
		printf("Phone No.\tAmount due\n");

		for (i = 0; i < 5; i++)
		{
			fscanf(cfPtr, "%d\t%f\t%f\t%f", &ph[i].num, &ph[i].local, &ph[i].idd, &ph[i].roam);
			ph[i].total = ph[i].local + ph[i].idd + ph[i].roam;
			printf("0%d\t%.2f\n", ph[i].num, ph[i].total);
		}
	}

	else
		printf("ERROR in FILE!\n");

	fclose(cfPtr);

	return 0;
}
