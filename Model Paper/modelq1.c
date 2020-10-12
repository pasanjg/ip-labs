#include <stdio.h>
int main(void)
{
	int nights, rooms;
	float rate, total = 0;
	char type, method, answer;

	do
	{
		printf("Enter the room type: ");
		scanf(" %c", &type);

		printf("Enter the no of  rooms: ");
		scanf("%d", &rooms);

		printf("Enter the no of nights: ");
		scanf("%d", &nights);

		printf("Enter the paying method: ");
		scanf(" %c", &method);

		if (type == 'D')
		{
			rate = 31000 * rooms * nights;
		}

		else if (type == 'S')
		{
			rate = 35000 * rooms * nights;
		}

		else if (type == 'C')
		{
			rate = 50000 * rooms * nights;
		}

		else if (type == 'E')
		{
			rate = 75000 * rooms * nights;
		}

		else if (type == 'P')
		{
			rate = 100000 * rooms * nights;
		}

		else
			printf("Invalid type!\n");

		switch (method)
		{
		case 'C':
			rate -= rate * 0.1;
			break;

		case 'M':
			rate = rate;
			break;

		default:
			printf("Invalid method!\n");
			return 1;
		}

		total += rate;

		printf("Do you want to continue? (Y/N): ");
		scanf(" %c", &answer);

	}

	while (answer == 'Y' || answer == 'y');

	puts("");
	printf("Total payment: %.2f\n", total);

	return 0;
}
