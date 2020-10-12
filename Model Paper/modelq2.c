#include <stdio.h>
int main(void)
{
	float usage[4][7] = {{1.2, 2.1, 0.8, 0.0, 1.0, 1.3, 4.0}, {1.5, 3.2, 1.0, 1.3, 4.0, 1.5, 3.2}, {2.3, 0.4, 1.2, 2.1, 0.8, 0.0, 2.6}, {2.1, 1.7, 7.0, 1.2, 2.1, 0.8, 0.0}};

	int week, day, maxDay, minDay;
	float max, min, total;

	max = usage[0][0];
	min = usage[0][0];

	for (week = 0; week < 4; week++)
	{
		for (day = 0; day < 7; day++)
		{
			if (usage[week][day] >= max)
			{
				max = usage[week][day];
				maxDay = (week * 7) + (day + 1);
			}

			if (usage[week][day] <= min)
			{
				min = usage[week][day];
				minDay = (week * 7) + (day + 1);
			}

			total += usage[week][day];
		}
	}

	puts("");

	printf("Day of the month with maximum usage: November %d\n", maxDay);
	printf("Maximum usage: %.1f units\n", max);
	printf("Day of the month with minimum usage: November %d\n", minDay);
	printf("Minimum usage: %.1f units\n", min);
	printf("Average usage: %.1f units\n", total / 28.0);
	printf("Total usage: %.1f units\n", total);

	return 0;
}
