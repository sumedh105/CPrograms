#include <stdio.h>

int main()
{
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') {
				;
			}//end of inner while loop
		}//end of if condition 
		putchar(c);
	}//end of while loop
}//end of main function
