#include <stdio.h>

int main()
{
	int nc = 0, c = 0;

	while ((c = getchar()) != EOF) {
		++nc;
	}//end of while loop

	printf("\nNumber of characters are: %d\n", nc);
}//end of main function
