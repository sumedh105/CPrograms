#include <stdio.h>

static char daytab[2][13] = 
		{
			{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
			{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
		};

void month_and_day_of_the_month(int, int, int *, int *);

int main()
{
	int year = 0;
	int yearday = 0;
	int month = 0;
	int dayofthemonth = 0;

	printf("\nEnter the year and year day\n");
	scanf("%d %d", &year, &yearday);
	printf("\nThe year and yearday entered are: %d\t %d\n", year, yearday);

	month_and_day_of_the_month(year, yearday, &month, &dayofthemonth);

	printf("\nThe month and day of the month are: %d and %d\n", month, dayofthemonth);

	return 0;
}//end of main function

void month_and_day_of_the_month(int year, int yearday, int *month, int *dayofthemonth) {
	int leapyear = 0;
	int index = 0;

	leapyear = (year%4 == 0 && year%100 != 0) || (year%400 == 0);
	printf("\nleapyear: %d\n", leapyear);

	for (index = 1; yearday >= daytab[leapyear][index]; index++) {
		yearday = yearday - daytab[leapyear][index];
	}//end of for loop

	*dayofthemonth = yearday;
	*month = index;	
}//end of dayOfTheYear() function
