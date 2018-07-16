#include <stdio.h>
#include <string.h>
#define MAXSIZE 1000

void integerToAscii(int, char *);
void reverse(char *);

int main()
{
	int num;
	char str[MAXSIZE];

	printf("\nEnter the integer that needs to be converted to ascii string\n");
	scanf("%d", &num);
	printf("\nThe integer number entered is: %d\n", num);

	integerToAscii(num, str);
	printf("\nThe string obtained after converting integer to ascii is :%s\n", str);

	reverse(str);	
	printf("\nThe string obtained after converting integer to ascii is: %s\n", str);

	return 0;
}//end of main function

void integerToAscii(int num, char *str) {
	int index = 0;

	while (num != 0) {
		*str = (num % 10) + '0';
		printf("\n*str: %c\n", *str);
		num = num / 10;	
		++str;
		++index;
	}//end of while loop
	*str = '\0';
	str = (str - index);
}//end of integerToAscii() function

void reverse(char *str) {
	int index = 0;
	int strLength = 0;
	char temp;
	
	strLength = strlen(str);

	while (index < (strLength - 1)) {
		temp = *str;
		*str = *(str + (strLength - 1));
		*(str + (strLength - 1)) = temp;

		++index;
		--strLength;	
		++str;
	}//end of while loop
}//end of reverse() function
