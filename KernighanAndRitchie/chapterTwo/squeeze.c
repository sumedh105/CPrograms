#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char str[MAXCHARS];
	char ch;
	int index = 0;
	int indexTwo = 0;

	for (index = 0; index < MAXCHARS; ++index) {
		str[index] = 0;
	}//end of for loop
	
	printf("\nEnter the string\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	printf("\nEnter a character that needs to be removed from the string\n");
	scanf(" %c", &ch);
	printf("\nThe character entered that needs to be removed from the string is: %c\n", ch);

	index = 0;
	while (str[index] != '\0') {
		if (str[index] != ch) {
			str[indexTwo++] = str[index];
		}//end of if condition
		++index;
	}//end of while loop
	str[indexTwo] = '\0';

	printf("\nThe resulting string is: %s\n", str);

	return 0;
}//end of main function
