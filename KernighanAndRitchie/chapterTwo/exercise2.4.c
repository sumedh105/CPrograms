#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char strOne[MAXCHARS];
	char strTwo[MAXCHARS];
	int indexOne = 0;
	int indexTwo = 0;

	printf("\nEnter the string one\n");
	scanf("%s", strOne);

	printf("\nEnter the string two\n");
	scanf("%s", strTwo);
	printf("\nThe strings entered are %s and %s\n", strOne, strTwo);

	while (strOne[indexOne] != '\0') {
		while (strTwo[indexTwo] != '\0') {
			if (strOne[indexOne] == strTwo[indexTwo]) {
				strOne[indexOne] = ' ';
			}//end of if condition
			++indexTwo;
		}//end of inner while loop
		++indexOne;
		indexTwo = 0;
	}//end of outer while loop

	printf("\nThe final string is: %s\n", strOne);
	
	return 0;
}//end of main function
