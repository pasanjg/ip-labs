#include <stdio.h>

int main(void)
{
	int rate[5] = {0};
	int rating;

	printf("Pls input the service rating (1-5): ");
	scanf("%d", &rating);

	while (rating != -1)
	{
		if (rating <= 5 && rating >= 1)
			rate[rating - 1]++;

		else
			printf("Invalid rating!\n");

		printf("Pls input the service rating (1-5): ");
		scanf("%d", &rating);
	}

	puts("");
	puts("Rating\tNumber");

	for (int i = 0; i < 5; i++)
	{
		printf("%d\t%d", i + 1, rate[i]);
		puts("");
	}

	return 0;
}
