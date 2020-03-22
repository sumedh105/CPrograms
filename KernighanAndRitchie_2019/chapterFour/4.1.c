#include <stdio.h>
#define MAXLINE 1000

int strrindex(char s[], char t[], int strLength);
int getLine(char s[], int limit);

int main()
{
	char s[MAXLINE];
	char t[MAXLINE];
	int index = 0;
	int rIndex = 0;

	printf("\nEnter the pattern that needs to be searched in the string s\n");
	scanf("%s", t);

	/* Get the string length of the array t. */
	while (t[index] != '\0')
	{
		++index;
	}
	//index = index - 1;
	printf("\nThe string length of the array t is: %d\n", index);

	printf("\nEnter the line from which the pattern needs to be searched\n");
	while (getLine(s, MAXLINE))
	{
		if (rIndex = strrindex(s, t, index))
		{
			printf("\nThe pattern t is present in the line: %s\n", s);
		}
	}
	printf("\nThe right most index of t in the string s is at position: %d\n", rIndex);

	return 0;
}

int getLine(char s[], int limit)
{
	int c;
	int index = 0;

	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		s[index++] = c;
	}

	if (c == '\n')
	{
		s[index++] = c;
	}

	s[index] = '\0';

	return index;
}


int strrindex(char s[], char t[], int strLength)
{
	int indexOne = 0; 
	int indexTwo = 0;
	int rightIndex = 0;

	while (t[indexOne] != '\n')
	{
		while (s[indexTwo] != '\n')
		{
			if (t[indexOne] == s[indexTwo])
			{
				++indexTwo;
				break;
			}
			else
			{
				++indexTwo;
			}
		}
		printf("\nindexTwo: %d\n", indexTwo);
		rightIndex = indexTwo - strLength;
		printf("\nrightIndex: %d\n", rightIndex);
		++indexOne;

		if (s[indexTwo] == '\n')
		{
			break;
		}

		if ((t[indexOne] == '\n') && (s[indexTwo] != '\n'))
		{
			indexOne = 0;
		}
	}

	return rightIndex;
}
