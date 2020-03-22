#include <stdio.h>

void getMonthAndDay(int, int, int *, int *);

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main()
{
	int year = 0;
	int yearday = 0;
	int month;
	int day;

	printf("\nEnter the year and the year day\n");
	scanf("%d%d", &year, &yearday);
	printf("\nThe year and yearday are: %d and %d\n", year, yearday);

	getMonthAndDay(year, yearday, &month, &day);

	printf("The month and day obtained from year and yearday are: %d and %d\n", month, day);

	return 0;
}

void getMonthAndDay(int year, int yearday, int *month, int *day)
{
	int leapYear;
	int index = 0;

	leapYear = ((year%4 == 0) && (year%100 != 0)) || (year%400 == 0);

	for (index = 1; yearday > daytab[leapYear][index]; ++index)
	{
		yearday = yearday - daytab[leapYear][index];
	}
	*month = index;
	*day = yearday;
}
