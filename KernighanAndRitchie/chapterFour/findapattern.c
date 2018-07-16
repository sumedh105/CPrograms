#include <stdio.h>
#define MAXLINELENGTH 100

int getLine(char str[], int limit);
int findPattern(char str[], char patternStr[]);

int main()
{
	char str[MAXLINELENGTH];
	char patternStr[MAXLINELENGTH];	
	int lineLimit = 0;

	printf("\nEnter the pattern string\n");
	scanf("%s", patternStr);
	printf("\nThe pattern string entered is: %s\n", patternStr);

	lineLimit = MAXLINELENGTH;

	while (getLine(str, lineLimit) > 0) {
		if (findPattern(str, patternStr) > 0) {
			printf("\nThe pattern is found in the string: %s\n", str);
		}//end of if condition
	}//end of while loop	

	return 0;
}//end of main function

int getLine(char str[], int lineLimit) {
	int index = 0;
	int c;

	while ((((c = getchar()) != EOF) && (c != '\n')) && (index <= lineLimit)) {
		str[index] = c;
		++index;
	}//end of while loop
	str[index] = c;
	++index;
	str[index] = '\0';

	return index;
}//end of getLine() function

int findPattern(char str[], char patternStr[]) {
	int flag = 0;
	int index = 0;
	int indexTwo = 0;
	
	while (patternStr[indexTwo] != '\0') {
		while (str[index] != '\0') {
			if (patternStr[indexTwo] == str[index]) {
				++index;
				flag = 1;
				break;
			}//end of if condition

			else {
				++index;
				flag = 0;
			}//end of else condition
		}//end of inner while loop
		++indexTwo;
	}//end of outer while loop	

	return flag;
}//end of findPattern() function
