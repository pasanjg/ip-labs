#include<stdio.h>

struct phone
{
	char num[10];
	float local, idd, roam;
}ph;

int main(void)
{
	int i;
	float total;

	FILE *cfPtr;

	cfPtr = fopen("charges.dat", "w");

	if (cfPtr != NULL)
	{
		for (i = 1; i <=5; i++)
		{
			printf("Enter number: ");
			scanf("%s", &ph.num);

			printf("Enter local charges: ");
                        scanf("%f", &ph.local);

			printf("Enter IDD charges: ");
                        scanf("%f", &ph.idd);

			printf("Enter roaming charges: ");
                        scanf("%f", &ph.roam);

			fprintf(cfPtr, "%s\t%.2f\t%.2f\t%.2f\n", ph.num, ph.local, ph.idd, ph.roam);
		}
	}

	else
	{
		printf("FILE ERROR!\n");
		return -1;
	}
	
	fclose(cfPtr);

	cfPtr = fopen("charges.dat", "r");

	if (cfPtr != NULL)
	{
		printf("Phone no\tAmount due\n");

		fscanf(cfPtr, "%s\t%f\t%f\t%f", &ph.num, &ph.local, &ph.idd, &ph.roam);

		while (!feof(cfPtr))
		{
			total = ph.local + ph.idd + ph.roam;

			printf("%s\t%.2f\n", ph.num, total);
			fscanf(cfPtr, "%s\t%f\t%f\t%f", &ph.num, &ph.local, &ph.idd, &ph.roam);
		}
	}

	else
	{
		printf("FILE ERROR!\n");
		return -1;
	}

	fclose(cfPtr);

	return 0;
}
