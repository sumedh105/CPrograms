#include <stdio.h>

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

static int dayOfYear(int year, int month, int day);

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int result = 0;

	printf("\nEnter the year, month and day\n");
	scanf("%d%d%d", &year, &month, &day);
	printf("\nThe year, month and day are: %d\t %d\t and %d\n", year, month, day);

	result = dayOfYear(year, month, day);

	printf("\nThe converted day of the year is: %d\n", result);

	return 0;
}

static int dayOfYear(int year, int month, int day)
{
	int leapYear = 0;
	int dayOfYear = 0;
	int index = 0;

	leapYear = ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);
	for (index = 1; index < month; ++index)
	{
		dayOfYear = dayOfYear + daytab[leapYear][index];
	}
	dayOfYear += day;

	return dayOfYear;
}
