#include <stdio.h>
int main(void)
{
	int A[5] = {10, 20, 30, 40, 50};
	int B[5] = {34, 67, 12, 89, 12};
	int C[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		C[i] = A[i] * B[i];
		printf("Element %d is %d\n", i, C[i]);
	}

	return 0;
}
