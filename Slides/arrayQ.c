#include <stdio.h>
#define SIZE 10

int main(void)
{
	int array[SIZE];
	int i = 1, max, num;

	while (i <= SIZE)
	{
		printf("Enter number: ");
		scanf("%d", &num);

		if (num >= 10 && num <= 100)
		{
			array[i] = num;
			i++;
		}
	}

	max = array[0];

	for (i = 0; i <= SIZE; i++)
	{
		if (array[i] >= max)
			max = array[i];
	}

	printf("Max: %d\n", max);

	return 0;
}
