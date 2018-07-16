#include <stdio.h>

int main()
{
	int c = 0, wc = 0, flag = 0;

	while ((c = getchar()) != EOF) {
		if ((c == ' ') || (c == '\n') || (c == '\t')) {
			flag = 0;
		}//end of if condition
		
		else if (flag == 0) {
			flag = 1;
			++wc;	
		}//end of if condition
	}//end of while loop
	printf("\nNumber of words are: %d\n", wc);
}//end of main function
