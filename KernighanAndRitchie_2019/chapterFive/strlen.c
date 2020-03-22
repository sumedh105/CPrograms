#include <stdio.h>

int main()
{
	char str[100];
	int c;
	int index = 0;
	int strLength = 0;

	printf("\nEnter the string whose length needs to be calculated\n");
	while (((c = getchar()) != EOF) && (c != '\n')) 
	{
		str[index++] = c;
	}
	str[index] = '\0';

	printf("\nThe string entered is: %s\n", str);
	index = 0;

	while (str[index] != '\0')
	{
		++strLength;
		++index;
	}

	printf("\nThe length of the string entered is: %d\n", strLength);

	return 0;
}
