#include <stdio.h>
#include <string.h>

struct person
{
	char name[10];
	char num[10];
} p;

int main(void)
{
	FILE *cfPtr;

	char ans = 'y';
	char search[10];

	while (ans == 'y' || ans == 'Y')
	{

		cfPtr = fopen("contacts.txt", "r");

		if (cfPtr != NULL)
		{

			printf("Enter name: ");
			scanf("%s", &search);

			fscanf(cfPtr, "%s\t%s", p.name, p.num);

			while (!feof(cfPtr))
			{
				if (strcmp(search, p.name) == 0)
				{
					printf("Name\tContact\n%s\t%s\n", p.name, p.num);
					return 0;
				}
				else
					fscanf(cfPtr, "%s\t%s", p.name, p.num);
			}

			printf("Contact not found!\n");
		}

		else
		{
			printf("FILE ERROR!\n");
			return 0;
		}

		fclose(cfPtr);

		printf("Try again? (Y/N): ");
		scanf(" %c", &ans);
	}

	return 0;
}
