#include <stdio.h>
int main(void)
{
	int i, j, s;

	for (i = 1; i <= 10; i++)
	{
		for (s = 9; s >= i; s--)
		{
			printf(" ");
		}

		for (j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
