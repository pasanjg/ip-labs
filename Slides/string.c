#include <stdio.h>
int main(void)
{
	char strings[5] = "pasan";
	char name[5] = {'n', 'a', 'm', 'e', '\0'};

	char values[5];

	printf("Enter name: ");
	scanf("%s", &values);

	for (int i = 0; i <= 5; i++)
	{
		printf("%s\n", strings);
		printf("%c\n", name[i]);
		printf("%c\n", values[1]);
	}
}
