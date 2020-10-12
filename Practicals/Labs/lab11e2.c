#include <stdio.h>
#include <string.h>

void convertToUpperCase(char a[], int size);

int main(void)
{
	char array[50], address[50];
	int n;

	//printf("Enter word: ");
	//scanf("%s", array);

	//n = strlen(array);

	strcpy(address, "SLIIT,New Kandy Road, Malabe ");

	n = strlen(address);

	convertToUpperCase(address, n);

	return 0;
}

void convertToUpperCase(char a[], int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}

	printf("UPPER CASE: ");

	for (i = 0; i < size; i++)
	{
		printf("%c", a[i]);
	}

	puts("");
}
