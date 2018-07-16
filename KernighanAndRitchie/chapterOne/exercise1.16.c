#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxLineLength) {
	int index = 0, c = 0;

	for (index = 0; (index < maxLineLength - 1) && (((c= getchar()) != EOF) && c != '\n'); index++) {
		line[index] = c;
	}//end of for loop

	if (c == '\n') {
		line[index] = '\n';
		index++;
	}//end of if condition

	line[index] = '\0';

	return index;
}//end of getLine() function

void copy(char line[], char longestLine[]) {
	int index = 0;
	
	while (line[index] != '\0') {
		longestLine[index] = line[index];
		++index;
	}//end of while loop

	longestLine[index] = '\0';
}//end of copy function

int main()
{
	int c = 0, index = 0, length = 0, maxLineLength = 0;
	char longestLine[MAXLINE], line[MAXLINE];
	
	for (index = 0; index < MAXLINE; index++) {
		line[index] = 0;
		longestLine[index] = 0;
	}//end of for loop

	while (length = getLine(line, MAXLINE)) {
		if (length > maxLineLength) {
			maxLineLength = length;
			copy (line, longestLine);
		}//end of if condition	
	}//end of while loop

	if (maxLineLength > 0) {
		printf("\nThe longest line is: %s\t and length of the line is: %d\n", longestLine, maxLineLength);		
	}//end of if condition
	
	return 0;
}//end of main function


