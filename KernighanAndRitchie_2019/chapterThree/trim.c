#include <stdio.h>
#define MAXCHAR 1000

int isSpecialChar(char c);

int main()
{
	char str[MAXCHAR];
	int index = 0;
	int c;
	int newIndex = 0;

	printf("\nFill the str array\n");
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		str[index++] = c;
	}
	str[index] = '\0';
	printf("\nThe entered array: %s\t and index: %d\n", str, index);

	index = index - 1;
	while (isSpecialChar(str[index]))
	{
		/* Do nothing*/
		--index;
	}
	++index;
	str[index] = '\0';

	while (str[newIndex] != '\0')
	{
		++newIndex;
	}

	printf("\nThe final array is: %s\t and newIndex: %d\n", str, newIndex);

	return 0;
}

int isSpecialChar(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return 1;

	return 0;
}

