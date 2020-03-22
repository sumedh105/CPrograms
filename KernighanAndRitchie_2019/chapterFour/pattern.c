#include <stdio.h>
#define MAXLINE 1000

int getLine(char str[], int);
int strIndex(char str[], char pattern[]);

int main()
{
	char str[MAXLINE];
	char pattern[MAXLINE];

	printf("\nEnter the pattern that needs to be searched in a line\n");
	scanf("%s", pattern);
	printf("\nThe pattern entered is: %s\n", pattern);

	printf("\nEnter the string from which the pattern needs to be searched\n");
	while (getLine(str, MAXLINE))
	{
		if (strIndex(str, pattern))
		{
			printf("\nThe line in which the pattern is found is: %s\n", str);
		}
	}

	return 0;
}

int strIndex(char str[], char pattern[])
{
	int indexOne = 0;
	int indexTwo = 0;

	while (pattern[indexOne] != '\0')
	{
		while (str[indexTwo] != '\0')
		{
			if (pattern[indexOne] == str[indexTwo])
			{
				++indexTwo;
				break;
			}
			else
			{
				++indexTwo;
			}
		}

		if (str[indexTwo] == '\0')
		{
			return 0;
		}
		else
		{
			++indexOne;
		}
	}

	if (pattern[indexOne] == '\0')
	{
		return 1;
	}
}

int getLine(char str[], int MAXLIMIT)
{
	int c;
	int index = 0;

	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		str[index++] = c;
	}
	if (c == '\n')
	{
		str[index++] = c;
	}
	str[index] = '\0';

	return index;	
}
