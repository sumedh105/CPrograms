#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

void strNCat(char *, char *, int);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int n;

	printf("\nEnter the two strings\n");
	scanf("%s", strOne);
	scanf("%s", strTwo);
	printf("\nThe string entered is: %s\n", strTwo);

	printf("\nEnter the number of characters that needs to be concatenated\n");
	scanf("%d", &n);
	printf("\nThe number of characters that needs to be concatenated are: %d\n", n);

	strNCat(strOne, strTwo, n);

	printf("\nThe concatenated string is: %s\n", strOne);

	return 0;
}//end of if condition

void strNCat(char *strOne, char *strTwo, int n) {
	int index = 0;

	if ((n > 1000) || (n < 0)) {
		exit(0);
	}//end of if condition

	else {
		while (*strOne) {
			++strOne;
		}//end of while loop
		
		while (index < n) {
			*strOne++ = *strTwo++;
			++index;
		}//end of while loop

		*strOne = '\0';	
	}//end of else condition
}//end of strNCopy() function
