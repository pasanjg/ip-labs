#include <stdio.h>
int main(void)
{

	int x = 1, c = 1;
	float pie = 4.0;

	while (pie > 3.14159)
	{
		if (c % 2 == 1)
		{
			x += 2;
			pie = pie - (4 / x);
			c++;
			printf("%d\t%f\n", c, pie);
		}

		else
		{
			x += 2;
			pie = pie + (4 / x);
			c++;
			printf("%d\t%f\n", c, pie);
		}
	}

	return 0;
}
