#include <stdio.h>
int main(void)
{
	int array[10];
	int i, j;
	char sym;

	for (i = 0; i < 10; i++)
	{
		printf("Enter Integer: ");
		scanf("%d", &array[i]);
	}

	printf("Enter prefered character: ");
	scanf(" %c", &sym);

	puts("");

	puts("Element\tValue\tHistogram");

	for (i = 0; i < 10; i++)
	{
		printf("%d\t%d\t", i, array[i]);

		for (j = 0; j < array[i]; j++)
		{
			printf("%c", sym);
		}

		puts("");
	}

	return 0;
}
