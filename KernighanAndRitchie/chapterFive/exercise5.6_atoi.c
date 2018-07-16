#include <stdio.h>
#define MAXSIZE 1000

int asciiToInteger(char *);

int main()
{
	char str[MAXSIZE];
	int result = 0;
	
	printf("\nEnter the ascii string that needs to be converted to integer\n");
	scanf("%s", str);
	printf("\nThe ascii string entered is: %s\n", str);

	result = asciiToInteger(str);

	printf("\nThe ascii to integer result obtained is: %d\n", result);
	
	return 0;
}//end of main function

int asciiToInteger(char *str) {
	int result = 0;

	while (*str != '\0') {
		result = (result * 10) + (*str - '0');
		str++;
	}//end of while loop	

	return result;
}//end of asciiToInteger() function


