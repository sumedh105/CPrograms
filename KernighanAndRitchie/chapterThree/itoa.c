#include <stdio.h>
#include <string.h>
#define MAXCHARS 1000

int main()
{
	int num = 0;
	int index = 0;
	int indexTwo = 0;
	int strLen = 0;
	char str[MAXCHARS];
	char c;

	printf("\nEnter the number that needs to be converted to ASCII\n");
	scanf("%d", &num);
	printf("\nThe number that needs to be converted to ASCII is: %d\n", num);
	
	while (num > 0) {
		str[index] = (num % 10) + '0';
		++index;
		num = num / 10;
	}//end of while loop
	str[index] = '\0';

	printf("\nThe string obtained is: %s\n", str);

	strLen = strlen(str);	
	printf("\nString length is: %d\n", strLen);

	index = index - 1;
	while (indexTwo < index) {
		c = str[index];
		str[index] = str[indexTwo];
		str[indexTwo] = c;

		++indexTwo;
		--index;
	}//end of while loop

	printf("\nThe final ascii string is: %s\n", str);
	
	return 0;
}//end of main function
