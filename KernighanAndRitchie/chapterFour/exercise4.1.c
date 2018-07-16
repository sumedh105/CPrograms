#include <stdio.h>
#define MAXLINELENGTH 100

int getLine(char str[], int limit);
int findPattern(char str[], char patternStr[]);

int main()
{
	char str[MAXLINELENGTH];
	char patternStr[MAXLINELENGTH];	
	int lineLimit = 0;
	int index = 0;

	printf("\nEnter the pattern string\n");
	scanf("%s", patternStr);
	printf("\nThe pattern string entered is: %s\n", patternStr);

	lineLimit = MAXLINELENGTH;

	while (getLine(str, lineLimit) > 0) {
		printf("\nThe string entered is: %s\n", str);
		if ((index = findPattern(str, patternStr)) > 0) {
			printf("\nThe pattern is found in the string at the index: %d\n", index);
		}//end of if condition
	}//end of while loop	

	return 0;
}//end of main function

int getLine(char str[], int lineLimit) {
	int index = 0;
	int c;

	printf("\nI am in the getLine() function\n");
	while ((((c = getchar()) != EOF) && (c != '\n')) && (index <= lineLimit)) {
		str[index] = c;
		++index;
	}//end of while loop

	if (c == '\n') {
		str[index] = c;
	}
	++index;
	str[index] = '\0';

	return index;
}//end of getLine() function

int findPattern(char str[], char patternStr[]) {
	int flag = 0;
	int index = 0;
	int indexTwo = 0;
	int indexThree = 0;

	while (str[index + 1] != '\0') {
		++index;
	}//end of while loop

	while (patternStr[indexTwo + 1] != '\0') {
		++indexTwo;
	}//end of while loop

	printf("\nindex: %d\t indexTwo: %d\n", index, indexTwo);
	
	while (indexTwo >= 0) {
		while (index >= 0) {
			if (patternStr[indexTwo] == str[index]) {
				--index;
				flag = 1;
				printf("\nI am in the if condition and index: %d\n", index);
				break;
			}//end of if condition

			else {
				--index;
				flag = 0;
				printf("\nI am in the else condition and index: %d\n", index);
			}//end of else condition
		}//end of inner while loop
		--indexTwo;
		indexThree = index;
		printf("\nI a outside of first while loop and index: %d\n", index);
	}//end of outer while loop	

	if (flag == 1) {
		indexThree = indexThree + 1;
		printf("\nI am in the flag condition and indexThree: %d\n", indexThree);
		return indexThree;
	}//end of if condition

	else {
		return -1;
	}//end of else condition
}//end of findPattern() function
