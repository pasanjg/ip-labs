#include <stdio.h>

struct phone
{
	int num;
	float local, idd, roam;
} ph[5];

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
			scanf("%d", &ph[i].num);

			printf("Enter local charges: ");
			scanf("%f", &ph[i].local);

			printf("Enter IDD charges: ");
			scanf("%f", &ph[i].idd);

			printf("Enter roaming charges: ");
			scanf("%f", &ph[i].roam);

			fprintf(cfPtr, "%d\t%.2f\t%.2f\t%.2f\n", ph[i].num, ph[i].local, ph[i].idd, ph[i].roam);
		}
	}

	else
		printf("ERROR in FILE!\n");

	fclose(cfPtr);

	return 0;
}
