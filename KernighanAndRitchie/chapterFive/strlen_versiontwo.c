#include <stdio.h>

int strLength(char *);

int main()
{
	char str[1000];
	int length = 0;

	printf("\nEnter a string whose length needs to be calculated\n");
	scanf("%s", str);
	printf("\nThe entered string is: %s\n", str);

	length = strLength(str);

	printf("\nThe length of the string is: %d\n", length);

	return 0;
}//end of main function

int strLength(char *str) {
	char *ptr;

	ptr = str;

	while (*ptr != '\0') {
		ptr++;
	}//end of while loop	

	return (ptr - str);	
}//end of strLength() function
