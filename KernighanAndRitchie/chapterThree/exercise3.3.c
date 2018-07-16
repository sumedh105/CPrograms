#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char strOne[MAXCHARS];
	char strTwo[MAXCHARS];
	int index = 0;
	int indexTwo = 0;
	char start;
	char end;

	printf("\nEnter the shorthand notation in strOne\n");
	scanf("%s", strOne);
	printf("\nThe shorthand notation entered in strOne is: %s\n", strOne);

	while (strOne[index] != '\0') {
		if (strOne[index] == '-') {
			start = strOne[index - 1];
			end = strOne[index + 1];
			printf("\nstart: %c\t end: %c\n", start, end);
			while (start <= end) {
				strTwo[indexTwo] = start;
				++start;
				++indexTwo;
			}//end of while loop
		}//end of if condition
		++index;
	}//end of while loop
	strTwo[indexTwo] = '\0';

	printf("\nString Two is: %s\n", strTwo);

}//end of main function
