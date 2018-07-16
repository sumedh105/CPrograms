#include <stdio.h>
#define MAXCHARS 100

void reverse(char[]);

int main()
{
	char str[MAXCHARS]

	printf("\nEnter a string that needs to be reversed\n");
	scanf("%s", str);
	printf("\nThe entered string is: %s\n", str);

	reverse(str);	

	printf("\nThe reversed string is: %s\n", str);
}//end of main function

void reverse(char str[]) {
	static int index;

	if (str[index + 1] != '\0') {
		reverse()
	}//end of if condition

}//end of reverse() function
