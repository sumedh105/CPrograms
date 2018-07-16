#include <stdio.h>
#include <string.h>
#define MAXCHARS 1000

int main()
{
	char str[MAXCHARS];
	char temp;
	int index = 0;
	int indexTwo = 0;

	printf("\nEnter a string that needs to be reversed\n");
	scanf("%s", str);
	printf("\nThe string that needs to be reversed is: %s\n", str);

	while (str[index + 1] != '\0') {
		++index;
	}//end of while loop

	printf("\nI am after the first for loop and index: %d and %d\n", index, strlen(str));

	while (indexTwo < index) {
		temp = str[indexTwo];
		printf("\n%c\n", temp);
		str[indexTwo] = str[index];
		printf("\n%c\n", str[indexTwo]);
		str[index] = temp;	
		printf("\n%c\n", str[index]);
		indexTwo++;
		index--;
	}//end of while loop

	printf("\nThe reversed string is: %s\n", str);

	return 0;
}//end of main function
