#include <stdio.h>

static char *month[] = {
			"Illegal month", "January", "February",
			"March", "April", "May",
			"June", "July", "August",
			"September", "October",
			"November", "December"
			};

char *return_month(int);

int main()
{
	int month_num = 0;
	char *str;
	
	printf("\nEnter the number of the month that needs to be returned\n");	
	scanf("%d", &month_num);
	printf("\nThe month number entered is: %d\n", month_num);

	str = return_month(month_num);
	
	printf("\nThe month returned is: %s\n", str);

	return 0;
}//end of main function

char *return_month(int num) {

	return (num < 1) || (num > 12) ? month[0] : month[num];

}//end of return_month() function
