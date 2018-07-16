#include <stdio.h>
#define MAXCHARS 1000

void findStr(char strOne[], char strTwo[], char strThree[]);

int main()
{
	char strOne[MAXCHARS];
	char strTwo[MAXCHARS];
	char strThree[MAXCHARS];
	int indexOne = 0;
	
	printf("\nEnter string one\n");
	scanf("%s", strOne);

	printf("\nEnter string two\n");
	scanf("%s", strTwo);
	printf("\nThe strings entered are %s and %s\n", strOne, strTwo);

	findStr(strOne, strTwo, strThree);

	while (strTwo[indexOne] != '\0') {
		if ((strTwo[indexOne] >= 'a') && (strTwo[indexOne] <= 'z')) {
			printf("\nThe character strTwo[indexOne]: %c\t is present in strOne at the location: %d\n", strTwo[indexOne], strThree[strTwo[indexOne] - 'a' + 'a']);
		}//end of if condition

		else if ((strTwo[indexOne] >= 'A') && (strTwo[indexOne] <= 'Z')) {
			printf("\nThe character strTwo[indexOne]: %c\t is present in strOne at the location: %d\n", strTwo[indexOne], strThree[strTwo[indexOne] - 'A' + 'A']);
		}//end of else if condition
		++indexOne;	
	}//end of while loop 	

	return 0;
}//end of main function

void findStr (char strOne[], char strTwo[], char strThree[]) {
	int indexOne = 0;
	int indexTwo = 0;
	int indexThree = 0;

	while (strTwo[indexOne] != '\0') {
		while (strOne[indexTwo] != '\0') {
			if (strTwo[indexOne] == strOne[indexTwo]) {
				if ((strTwo[indexOne] >= 'a') && (strTwo[indexOne] <= 'z')) {
					strThree[strTwo[indexOne] - 'a' + 'a'] = indexTwo; 
				}//end of inner if condition

				else if ((strTwo[indexOne] >= 'A') && (strTwo[indexOne] <= 'Z')) {
					strThree[strTwo[indexOne] - 'A' + 'A'] = indexTwo; 
				}//end of else condition
			break;
			}//end of if condition	

			else {
				if ((strTwo[indexOne] >= 'a') && (strTwo[indexOne] <= 'z')) {
					strThree[strTwo[indexOne] - 'a' + 'a'] = -1;
				}//end of if condition	
	
				else if ((strTwo[indexOne] >= 'A') && (strTwo[indexOne] <= 'Z')) {
					strThree[strTwo[indexOne] - 'A' + 'A'] = -1;
				}//end of else if condition	
			}//end of else condition
			++indexTwo;
		}//end of inner while loop
		++indexOne;
		indexTwo = 0;
	}//end of outer while loop
}//end of findStr() function
