#include <stdio.h>
#define MAXCHAR 1000

int isChar(char c);
int isDigit(char c);

int main()
{
	char s1[MAXCHAR];
	char s2[MAXCHAR];
	int index = 0; 
	char indexOne = 0;
	int strLength = 0;
	int c;

	printf("\nFill the array s1\n");
	while (((c = getchar()) !=  EOF) && (c != '\n'))
	{
		s1[index++] = c;
	}
	s1[index] = '\0';
	printf("\nThe array entered is: %s\n", s1);

	strLength = (index - 1);
	printf("\nThe length of the string entered is: %d\n", strLength);

	index = 0;
	indexOne = s1[index];

	if (((isChar(s1[index])) && (isChar(s1[strLength]))) 
		|| ((isChar(s1[index])) && (isChar(s1[strLength])))
		       	|| ((isDigit(s1[index])) && (isDigit(s1[strLength]))))
	{
		while (indexOne <= s1[strLength])
		{
			putchar(indexOne);
			++indexOne;	
		}
	}

	else if ((isChar(s1[index])) && (isDigit(s1[strLength]))
		|| ((isDigit(s1[index])) && (isChar(s1[strLength]))))
	{
		while (isChar(s1[index]))
		{
			++index;
		}
		while (indexOne <= s1[index - 1])
		{
			putchar(indexOne);
			++indexOne;
		}
		
		indexOne = s1[index];
		while (indexOne <= s1[strLength])
		{
			putchar(indexOne);
			++indexOne;
		}
	}
	putchar('\n');

	return 0;
}

int isChar(char c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return 1;
	else if ((c == '-') || (c == '\t') || (c == '\n'))
		return 1;

	return 0;
}

int isDigit(char c)
{
	if ((c >= '0') && (c <= '9'))
		return 1;

	return 0;
}
