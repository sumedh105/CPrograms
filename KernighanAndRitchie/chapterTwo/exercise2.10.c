#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char str[MAXCHARS];
	int index = 0;

	printf("\nEnter the string\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	while (str[index] != '\0') {
		(str[index] >= 'A' && str[index] < 'Z') ? str[index] = str[index] - 'A' + 'a' : str[index];
		++index; 
	}//end of while loop

	printf("\nThe new string is %s\n", str);

	return 0;
}//end of main function
