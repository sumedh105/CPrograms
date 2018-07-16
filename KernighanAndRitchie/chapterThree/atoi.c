#include <stdio.h>
#define MAXCHARS 10000

int main()
{
	char str[MAXCHARS];
	int index = 0;
	int result = 0;

	printf("\nEnter the ascii number in the string\n");
	scanf("%s", str);
	printf("\nThe entered ascii number is: %s\n", str);

	while (str[index] != '\0') {
		result = (result * 10) + (str[index] - '0');
		++index;	
	}//end of while loop	

	printf("\nThe resukt is: %d\n", result);
	
	return 0;
}//end of main function
