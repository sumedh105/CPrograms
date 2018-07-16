#include <stdio.h>
#define MAXLINELENGTH 1000

int main()
{
	char str[MAXLINELENGTH];
	int index = 0;
	int result = 0;

	printf("\nEnter the string with numbers\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	while (str[index] != '\0') {
		result = (result * 10) + (str[index] - '0');
		++index;
	}//end of while loop

	printf("\nThe result is: %d\n", result);
}//end of main function
