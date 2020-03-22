#include <stdio.h>

int strLen(char *);

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

	strLength = strLen(str);

	printf("\nThe length of the string is: %d\n", strLength);

	return 0;
}

int strLen(char *p)
{
	int strLength = 0;

	while (*p != '\0')
	{
		++strLength;
		p++;;
	}

	return strLength;
}
