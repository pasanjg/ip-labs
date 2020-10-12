#include <stdio.h>
int main(void)
{
	int i, j, s;

	for (i = 1; i <= 10; i++)
	{

		for (s = 1; s < i; s++)
		{
			printf(" ");
		}

		for (j = 10; j >= i; j--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}
