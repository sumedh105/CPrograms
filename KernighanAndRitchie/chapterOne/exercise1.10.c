#include <stdio.h>

int main()
{
	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\t");
		}//end of if condition
	
		else if (c == '\b') {
			printf("\b");
		}//end of else if condition

		else if (c == '\\') {
			printf("\\");
		}//end of else if condition
	}//end of while loop
}//end of main function
