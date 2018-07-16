#include <stdio.h>
#define MAXNUMS 1000

int main()
{
	int c;
	int nWhite = 0;
	int ndigits[MAXNUMS] = {0};
	int nOther = 0;
	int index = 0;

	while ((c = getchar()) != EOF) {
		switch (c) {
			case '0': case '1': case '2': case '3': case '4': case '5':
				case '6':case  '7': case '8': case '9':

				ndigits[c - '0']++;
				break;

			case ' ':
			case '\n':
			case '\t':
				nWhite++;
				break;

			default:
				nOther++;
				break;
		}//end of switch case
	}//end of while loop

	printf("\nThe number of digits are:\n");
	for (index = 0; index < 10; index++) {
		printf("\nndigits[%d]: %d\n", index, ndigits[index]);
	}//end of for loop
	
	printf("\nNumber of white spaces are: %d\t and number of other characters are: %d\n", nWhite, nOther);

	return 0;
}//end of main function
