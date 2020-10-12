#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[20];
	int i;

	printf("Enter word: ");
	scanf("%s", &word);

	for (i = 0; i < strlen(word); i++)
	{
		if (word[i] != word[strlen(word) - (i + 1)])
		{
			printf("%s is not a plaindrome\n", word);
			return 0;
		}
	}

	printf("%s is a plaindrome\n", word);

	return 0;
}
