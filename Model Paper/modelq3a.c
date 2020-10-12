#include <stdio.h>

struct phone
{
	int num;
	float local, idd, roam;
} ph1;

int main(void)
{
	FILE *cfPtr;

	int i;

	cfPtr = fopen("charges.dat", "w");

	if (cfPtr != NULL)
	{
		for (i = 0; i < 5; i++)
		{
			printf("Enter phone number: ");
			scanf("%d", &ph1.num);

			printf("Enter local charges: ");
			scanf("%f", &ph1.local);

			printf("Enter IDD charges: ");
			scanf("%f", &ph1.idd);

			printf("Enter roaming charges: ");
			scanf("%f", &ph1.roam);

			fprintf(cfPtr, "%d\t%.2f\t%.2f\t%.2f\n", ph1.num, ph1.local, ph1.idd, ph1.roam);
		}
	}

	else
		printf("ERROR in FILE!\n");

	fclose(cfPtr);

	return 0;
}
