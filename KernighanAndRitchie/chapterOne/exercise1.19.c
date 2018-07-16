#include <stdio.h>
#define MAX 1000

void reverse (char str[]) {
	int index = 0, newIndex = 0;
	char newStr[MAX];

	while (str[index + 1] != '\0') {
		index++;
	}//end of while loop

	while (index >= 0) {
		newStr[newIndex] = str[index];
		--index;
		++newIndex;
	}//end of while loop

	newStr[newIndex] = '\0';

	printf("\nThe reversed string is: %s\n", newStr);
}//end of reverse function

int main()
{
	int c = 0;
	char str[MAX];
	
	printf("\nEnter the string\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	reverse(str);
}//end of main function
