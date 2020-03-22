#include <stdio.h>
#define MAXCHAR 1000

int main()
{
	char str[MAXCHAR];
	int index = 0;
	int strLength = 0;
	char temp;
	int c;

	printf("\nEnter the string that needs to be reversed\n");
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		str[index++] = c;
	}
	str[index] = '\0';
	printf("\nThe string entered is: %s\n", str);

	while (str[strLength] != '\0')
	{
		++strLength;
	}
	printf("\nThe string length before is: %d\n", strLength);
	strLength = (strLength - 1);
	printf("\nThe string length is: %d\n", strLength);

	index = 0;
	while (index < strLength)
	{
		temp = str[index];
		str[index] = str[strLength];
		str[strLength] = temp;

		++index;
		--strLength;
	}
	printf("\nThe reversed string is: %s\n", str);

	return 0;
}
