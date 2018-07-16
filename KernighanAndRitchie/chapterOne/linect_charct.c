#include <stdio.h>

int main()
{
	int nl = 0, nc = 0, c = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		}//end of if condition
		++nc;
	}//end of while loop

	printf("\nNumber of lines are: %d\t and number of characters are: %d\n", nl, nc);
}//end of main function
