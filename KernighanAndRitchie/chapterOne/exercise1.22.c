#include <stdio.h>
#define MAXLINE 1000
#define MAXCHARS 1000

int getLine (char line[]) {
	int index = 0, c = 0;

	for (index = 0; index < MAXLINE-1 && (((c= getchar()) != EOF) && (c != '\n')); index++) {
		line[index] = c;
	}//end of for loop

	if (c == '\n') {
		line[index] = '\n';
		++index;
	}//end of if condition
	line[index] = '\0';
	return index;

}//end of getline function

int main()
{
	int c = 0, len = 0, index = 0, spaceholder = 0, location = 0;
	const int FOLDLENGTH = 20;	
	char line[MAXCHARS];

	for (index = 0; index < MAXCHARS; index++) {
		line[index] = 0;
	}//end of for loop

	while ((len = getLine(line)) > 0) {
		if (len > FOLDLENGTH) {
			while (index < len) {
				if (line[index] == ' ') {
					spaceholder = index;
				}//end of if condition
				if (location == FOLDLENGTH) {
					line[spaceholder] = '\n';
					location = 0;
				}//end of if condition
				++location;
				++index;
			}//end of while loop	
		}//end of if condition
		printf("\n%s\n", line);
	}//end of while loop

	return 0;
}//end of main function
