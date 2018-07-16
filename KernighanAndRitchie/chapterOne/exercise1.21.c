#include <stdio.h>
#define MAXCHARS 1000
#define MAXTABS 4
#define IN 1
#define OUT 0

int main()
{
	int c, index = 0, indexTwo = 0, indexThree = 0, nspc = 0, state = 0, ntabs = 0, nblanks = 0;
	char arr[MAXCHARS], newArr[MAXCHARS];

	for (index = 0; index < MAXCHARS; index++) {
		arr[index] = 0;
		newArr[index] = 0;
	}//end of for loop
	index = 0;

	while ((c = getchar()) != EOF) {
		arr[index] = c;
		++index;
	}//end of while loop
	++index;
	arr[index] = '\0';

	printf("\nThe entered string is: %s\n", arr);

	for (index = 0, indexTwo = 0; arr[index] != '\0'; ++index) {
		if (arr[index] == ' ') {
			++nspc;
			state = IN;
		}//end of if condition

		else {
			if (state == IN) {
				ntabs = nspc / MAXTABS;
				nblanks = nspc % MAXTABS;

				if (nspc > MAXTABS) {
					for (indexThree = 0; indexThree < ntabs; indexThree++) {
						newArr[indexTwo] = '\t';
						++indexTwo;
					}//end of for loop

					for (indexThree = 0; indexThree < nblanks; indexThree++) {
						newArr[indexTwo] = ' ';
						++indexTwo;
					}//end of for loop
				}//end of if condition

				else {
					for (indexThree = 0; indexThree < nblanks; indexThree++) {
						newArr[indexTwo] = ' ';
						++indexTwo;
					}//end of for loop
				}//end of else condition
				state = OUT;
				nspc = 0;
			}//end of if condition

			else {
				newArr[indexTwo] = arr[index];
				++indexTwo;
			}//end of else condition
		}//end of else condition
	}//end of for loop
	newArr[indexTwo] = '\0';

	printf("\nThe string obtained after adjusting the strings and tabs is: %s\n", newArr);	

	return 0;
}//end of main function
