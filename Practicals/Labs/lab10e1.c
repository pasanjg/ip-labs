#include <stdio.h>
int main(void)
{
	int search, i;

	int array[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};

	printf("Enter number: ");
	scanf("%d", &search);

	for (i = 0; i < 10; i++)
	{
		if (array[i] == search)
		{
			printf("%d is in %d index\n", search, i);
			return -1;
		}
	}

	printf("Value not found!\n");

	return 0;
}
