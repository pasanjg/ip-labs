#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[50];
	int i;

	printf("Enter name: ");
	scanf("%20s", name);

	printf("Backwards: ");

	for (i = 0; i < 10; i++)
	{
		printf("%c", name[strlen(name) - i]);
	}

	puts("");

	return 0;
}
