#include <stdio.h>

int main()
{
	int c = 0, index = 0, wordLen[10] = {0}, nChar = 0, flag = 0;

	for (index = 0; index < 10; ++index) {
		wordLen[index] = 0;
	}//end of for loop

	while ((c = getchar()) != EOF) {
		if ((c == ' ') || (c == '\t') || (c == '\n')) {
			if (flag == 1) {
				for (index = 0; index < nChar; ++index) {
					putchar('-');
				}//end of for loop
				nChar = 0;
				flag = 0;
				putchar('\n');
			}//end of if condition
		}//end of if condition

		else {
			++nChar;
			flag = 1;
		}//end of else condition	
	}//end of while loop
}//end of main function
