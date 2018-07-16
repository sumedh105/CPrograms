#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 1000

void strNCopy(char *, char *, int);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int n;

	printf("\nEnter the string that needs to be copied\n");
	scanf("%s", strTwo);
	printf("\nThe string entered is: %s\n", strTwo);

	printf("\nEnter the number of characters that needs to be copied\n");
	scanf("%d", &n);
	printf("\nThe number of characters that needs to be copied are: %d\n", n);

	strNCopy(strOne, strTwo, n);

	printf("\nThe copied string is: %s\n", strOne);

	return 0;
}//end of if condition

void strNCopy(char *strOne, char *strTwo, int n) {
	int index = 0;

	if ((n > 1000) || (n < 0)) {
		exit(0);
	}//end of if condition

	else {
		while (index < n) {
			*strOne++ = *strTwo++;
			++index;
		}//end of while loop

		*strOne = '\0';	
	}//end of else condition
}//end of strNCopy() function
