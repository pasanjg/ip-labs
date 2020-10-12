#include <stdio.h>
int main(void)
{

	char col;

	printf("Enter colour: ");
	scanf(" %c", &col);

	if ((col == 'o') || (col == 'O'))
	{
		printf("The cylinder contains Ammonia\n");
	}

	else if ((col == 'b') || (col == 'B'))
	{
		printf("The cylinder contains Ammonia\n");
	}

	else if ((col == 'y') || (col == 'Y'))
	{
		printf("The cylinder contains Ammonia\n");
	}

	else if ((col == 'g') || (col == 'G'))
	{
		printf("The cylinder contains Ammonia\n");
	}

	else
	{
		printf("Invalid Colour\n");
	}

	printf("Glad to be of service\n");

	return 0;
}
