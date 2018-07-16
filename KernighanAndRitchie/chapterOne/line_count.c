#include <stdio.h>

int main()
{
	long int lc = 0;
	int c = 0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++lc;
		}//end of if condition
	}//end of while loop

	printf("\nNumber of lines are: %ld\n", lc);
}//end of main function
