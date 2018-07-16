#include <stdio.h>

int main()
{
	int arr[10], nWhite = 0, nOther = 0, index = 0;
	int c;

	for (index = 0; index < 10; ++index) {
		arr[index] = 0;
	}//end of for loop

	while ((c = getchar()) != EOF) {
		if ( c == ' ') {
			++nWhite;
		}//end of if condition

		else if ((c >= '0') && (c <= '9')) {
			++arr[c - '0'];
		}//end of else if condition

		else {
			++nOther;
		}//end of else condition
	}//end of while loop		
	printf("\nNumber of blank spaces and number of other characters are: %d\t and: %d\n", nWhite, nOther);

	for (index = 0; index < 10; ++index) {
		printf("\narr[%d]: %d\n", index, arr[index]);
	}//end of for loop
}//end of main function
