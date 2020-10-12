#include <stdio.h>

struct person
{
	char name[10];
	char num[10];
} p;

int main(void)
{
	FILE *cfPtr;
	char ans = 'Y';

	cfPtr = fopen("contacts.txt", "w");

	if (cfPtr != NULL)
	{
		while (ans == 'y' || ans == 'Y')
		{
			printf("Enter name: ");
			scanf("%s", &p.name);

			printf("Enter number: ");
			scanf("%s", &p.num);

			fprintf(cfPtr, "%s\t%s\n", p.name, p.num);

			printf("Continue? (Y/N): ");
			scanf(" %c", &ans);
		}
	}

	else
	{
		printf("FILE ERROR!\n");
		return 0;
	}

	fclose(cfPtr);

	return 0;
}
