#include <stdio.h>
#include <string.h>

struct doctor
{
	int docNo;
	char name[20];
	float charge;
} doc1;

int main(void)
{
	FILE *cfPtr;

	float total = 0;
	char title[50];

	cfPtr = fopen("appointments.dat", "w");

	if (cfPtr != NULL)
	{
		fprintf(cfPtr, "DocNo\tName\tCharge\n");

		for (int i = 0; i < 5; i++)
		{
			printf("Enter Doc No: ");
			scanf("%d", &doc1.docNo);

			printf("Enter name: ");
			scanf("%s", &doc1.name);

			printf("Enter charge: ");
			scanf("%f", &doc1.charge);

			fprintf(cfPtr, "%d\t\t%s\t%.2f\n", doc1.docNo, doc1.name, doc1.charge);
		}
	}

	else
		printf("FILE ERROR!\n");

	fclose(cfPtr);

	cfPtr = fopen("appointments.dat", "r");

	if (cfPtr != NULL)
	{
		fscanf(cfPtr, "%s\t%s\t%s", &title, &title, &title);

		while (!feof(cfPtr))
		{
			fscanf(cfPtr, "%d\t\t%s\t%f", &doc1.docNo, &doc1.name, &doc1.charge);
			total += doc1.charge;
		}

		printf("Total Income\n%.2f\n", total);
	}

	else
		printf("FILE ERROR!\n");

	fclose(cfPtr);

	return 0;
}
