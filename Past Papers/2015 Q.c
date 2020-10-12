#include <stdio.h>
#include <string.h>

int main(void)
{
	char Answer[5];
	char stAnswer[3][5];
	char ans;
	int count = 0;

	for (int i = 0; i < 5;)
	{
		printf("Enter answer %d: ", i + 1);
		scanf(" %c", &ans);

		if (ans == 'T' || ans == 't' || ans == 'F' || ans == 'f')
		{
			Answer[i] = ans;
			i++;
		}

		else
			printf("Re-enter\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5;)
		{
			printf("Enter Student %d answer %d: ", i + 1, j + 1);
			scanf(" %c", &ans);

			if (ans == 'T' || ans == 't' || ans == 'F' || ans == 'f')
			{
				stAnswer[i][j] = ans;
				j++;
			}

			else
				printf("Re-enter\n");
		}
	}

	for (int i = 0; i < 3; i++)
	{
		count = 0;
		for (int j = 0; j < 5; j++)
		{
			if (stAnswer[i][j] == Answer[j])
				count++;
		}
		printf("Student %d: %d\n", i + 1, count);
	}

	return 0;
}
