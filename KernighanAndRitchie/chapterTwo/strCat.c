#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char strOne[MAXCHARS];
	char strTwo[MAXCHARS];
	int indexOne = 0;
	int indexTwo = 0;

	printf("\nEnter string one\n");
	scanf("%s", strOne);

	printf("\nEnter string two\n");
	scanf("%s", strTwo);

	printf("\nThe strings entered are %s and %s\n", strOne, strTwo);

	while (strOne[indexOne] != '\0') {
		++indexOne;
	}//end of while loop

	while (strTwo[indexTwo] != '\0') {
		strOne[indexOne] = strTwo[indexTwo];
		++indexOne;
		++indexTwo;
	}//end of while loop
	strOne[indexOne] = '\0';

	printf("\nThe final string is: %s\n", strOne);

	return 0;
}//end of main function
