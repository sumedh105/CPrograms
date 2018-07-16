#include <stdio.h>

int main()
{
	int nt = 0, nb = 0, nl = 0, nc = 0;
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}//end of if condition
	
		else if (c == ' ') {
			++nb;
		}//end of else if condition

		else if (c == '\t') {
			++nt;
		}//end of else if condition

		++nc;
	}//end of while loop

	printf("\nNumber of characters are: %d\t, number of lines are: %d\t, number of blanks are: %d\t and number of tabs are: %d\n", nc, nl, nb, nt);
}//end of main function
