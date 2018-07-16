#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	int c;
	int index = 0;
	int indexTwo = 0;
	char sourceStr[MAXCHARS];
	char targetStr[MAXCHARS];

	printf("\nEnter the string\n");
	while ((c = getchar()) != EOF) {
		sourceStr[index] = c;	
		++index;
	}//end of while loop
	sourceStr[index] = '\0';
	index = 0;
	printf("\nThe string entered is: %s\n", sourceStr);

	while (sourceStr[index] != '\0') {
		switch (sourceStr[index]) {
			case '\\':
				if (sourceStr[index + 1] == 'n') {
					targetStr[indexTwo] = '\n';
					++index;
				}//end of if condition

				else if (sourceStr[index + 1] == 't'){
					targetStr[indexTwo] = '\t';
					++index;
				}//end of else condition

				break;

			default:
				targetStr[indexTwo] = sourceStr[index];
				break;
		}//end of switch case

		++indexTwo;
		++index;
	}//end of while loop	
	targetStr[indexTwo] = '\0';

	printf("\nThe target string is: %s\n", targetStr);	

	return 0;
}//end of main function
