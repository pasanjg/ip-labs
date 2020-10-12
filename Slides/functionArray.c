#include <stdio.h>
#define SIZE 5

void modifyArray(int array[SIZE], size_t i);

int main(void)
{
	int array1[SIZE] = {1, 2, 3, 4, 5};

	printf("Original: ");

	for (size_t i = 0; i < SIZE; i++)
	{
		printf("%d", array1[i]);
	}

	puts("");

	printf("Modified: ");

	modifyArray(array1, SIZE);

	return 0;
}

void modifyArray(int array[SIZE], size_t i)
{
	for (i = 0; i < 5; i++)
	{
		array[i] *= 2;
		printf("%d", array[i]);
	}

	puts("");
}
