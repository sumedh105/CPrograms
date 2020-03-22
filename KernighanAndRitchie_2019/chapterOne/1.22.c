#include <stdio.h>
#define MAXLINE 1000
#define INPUT_COLUMN 20

int getLine(char[], int);

int main()
{
	int len = 0;
	char line[MAXLINE];
	char newLine[MAXLINE];
	int noOfLines = 0;
	int lines = 0;
	int index = 0;
	int indexOne = 0;

	while (len = getLine(line, MAXLINE))
	{
		noOfLines = (len % INPUT_COLUMN);

		printf("\nThe line received from getLine() function is: %s\n", line);
		if (noOfLines > 1)
		{
			for (index = 0; index < noOfLines; ++index)
			{
				line[indexOne + INPUT_COLUMN] = '\n';
				indexOne += INPUT_COLUMN;
			}
		}
		printf("\nThe line finally obtained is: %s\n", line);
	}

	return 0;
}

int getLine(char line[], int limit)
{
	int c;
	int index = 0;

	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		line[index++] = c;
	}

	if (c == '\n')
	{
		line[index++] = c;
	}

	line[index] = '\0';

	return index;
}
