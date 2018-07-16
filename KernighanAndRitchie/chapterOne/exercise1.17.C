#include <stdio.h>
#define MAXLINELENGTH 1000

int getline(char line[], int maxlinelength) {
	int index = 0, c = 0;

	for (index = 0; index < maxlinelength && (((c = getchar()) != EOF) && (c != '\n')); ++index) {
		line[index] = c;
	}//end of for loop	

	if (c == '\n') {
		line[index] = c;
	}//end of if condition

	return index;
}//end of getline function

int main()
{
	char line[MAXLINELENGTH];
	int length = 0;

	while (length = getline(line, MAXLINELENGTH)) {
		if (length > 80) {
			printf("\nThe line whose length is greater than 80 is: %d\n", length);
		}//end of if condition
	}//end of while loop

	return 0;
}//end of main function
