#include <stdio.h>

static char daytab[2][13] = 
		{
			{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
			{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
		};

int dayOfTheYear(int, int, int);

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int dayoftheyear = 0;

	printf("\nEnter the year, month and day\n");
	scanf("%d %d %d", &year, &month, &day);
	printf("\nThe year, month and day entered are: %d\t %d\t and %d\n", year, month, day);

	dayoftheyear = dayOfTheYear(year, month, day);

	printf("\nThe day of the year is: %d\n", dayoftheyear);

	return 0;
}//end of main function

int dayOfTheYear(int year, int month, int day) {
	int leapyear = 0;
	int index = 0;

	leapyear = (year%4 == 0 && year%100 != 0) || (year%400 == 0);
	printf("\nleapyear: %d\n", leapyear);

	for (index = 1; index < month; index++) {
		day += daytab[leapyear][index];
	}//end of for loop	

	return day;
}//end of dayOfTheYear() function
