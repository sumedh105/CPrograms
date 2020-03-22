#include <stdio.h>
#define MAXCHARS 1000

void reverse(char str[], int strLength);

int main()
{
	int result = 0;
	int num = 0; 
	int a = 0; 
	char str[MAXCHARS];
	int index = 0;

	printf("\nEnter the number that should be converted to ascii\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	do
	{
		str[index++] = num % 10 + '0';
		num = num / 10;
	} while (num);
	str[index] = '\0';

	index = index - 1;
	reverse(str, index);

	printf("\nThe converted string from integer to ascii is: %s\n", str);

	return 0;
}

void reverse(char str[], int strLength)
{
	int index = 0;
	char temp;

	while (index < strLength)
	{	
		temp = str[index];
		str[index] = str[strLength];
		str[strLength] = temp;

		++index;
		--strLength;
	}
}
