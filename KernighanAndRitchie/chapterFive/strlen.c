#include <stdio.h>

int strLength(char *);

int main()
{
	char str[100];
	int length = 0;
	char *ptr = "Hello World";

	//printf("\nEnter a string\n");
	//scanf("%s", str);
	//printf("\nThe string entered is: %s\n", str);

	length = strLength(ptr);

	printf("\nThe length of the string is: %d\n", length);

	return 0;
}//end of main function

int strLength(char *str) {
	int index = 0;

	while (*str != '\0') {
		++index;	
		++str;
	}//end of while loop
	
	return index;
}//end of strLength function
