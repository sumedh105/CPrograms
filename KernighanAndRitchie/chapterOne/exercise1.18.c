#include <stdio.h>
#define MAXLINELENGTH 10000

int getLine(char line[], int maxlinelength) {
	int index = 0, c = 0;

	for (index = 0; (index < maxlinelength) && (((c = getchar()) != EOF) && (c != '\n')); index++) {
		line[index] = c;
	}//end of for loop

	if (c == '\n') {
		line[index] = c;
		++index;
	}//end of if condition

	line[index] = '\0';

	return index;
}//end of getline function

void removeBlanks(char line[], int length, char newLine[]) {
	int index = 0, newLineIndex = 0;

	for (newLineIndex = 0; newLineIndex < MAXLINELENGTH; newLineIndex++) {
		newLine[newLineIndex] = 0;
	}//end of for loop

	for (index = 0, newLineIndex = 0; index < length; index++, newLineIndex++) {
		if ((line[index] == ' ') && (line[index] == '\t')) {
		}//end of if condition

		else {
			newLine[newLineIndex] = line[index];
		}//end of else condition
	}//end of for loop

}//end of removeBlanks function

int main()
{
	char line[MAXLINELENGTH], newLine[MAXLINELENGTH];
	int length = 0, index = 0;

	for (index = 0; index < MAXLINELENGTH; index++) {
		line[index] = 0;
		newLine[index] = 0;
	}//end of for loop

	while (length = getLine(line, MAXLINELENGTH)) {
		if (length > 0) {
			printf("\nThe line is: %s\n", line);
		}//end of if condition
	}//end of while loop

	removeBlanks(line, length, newLine);
	
	printf("\nThe new line is: %s\n", newLine);

	return 0;
}//end of main function
