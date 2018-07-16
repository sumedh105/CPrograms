#include <stdio.h>

int main()
{
	int c = 0;

	while ((c = getchar()) != EOF) {
		if ((c == ' ') || (c == '\t')) {
			putchar('\n');
		}//end of if condition

		else {
			putchar(c);
		}//end of else condition
	}//end of while loop
}//end of main function
