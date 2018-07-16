#include <stdio.h>
#define MAXLINELENGTH 1000

int isDigit (float f);

int main()
{
	char str[MAXLINELENGTH];
	float result = 0.0;
	int index = 0;
	float power = 1.0;

	printf("\nEnter the ascii value that needs to be converted to float\n");
	scanf("%s", str);
	printf("\nThe entered float number in the string is: %s\n", str);

	while (isDigit(str[index])) {
		result = (result * 10.0) + (str[index] - '0');
		++index;
	}//end of while loop

	printf("\nONe: the intetrmediate result is: %f\n", result);
	
	if (str[index] == '.') {
		++index;
	}//end of if condition

	while (isDigit(str[index])) {
		result = (result * 10.0) + (str[index] - '0');
		++index;
		power = (power * 10.0);
	}//end of while loop		

	printf("\nTwo: the intetrmediate result is: %f\n", result);
	
	result = (result / power);

	printf("\nThe resulting ascii number is: %f\n", result);

}//end of main function

int isDigit(float value) {
	printf("\nThe value is: %f\n", (value - '0'));

	value = (value - '0');

	if ((value <= 9.0) && (value >= 0.0)) {
		printf("\nI am in if condition\n");
		return 1;
	}//end of of condition

	else {
		printf("\nI am in else condition\n");
		return 0;
	}//end of else condition
}//end of isDigit() function
