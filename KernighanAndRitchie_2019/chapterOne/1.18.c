#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getLine(char [], int);

int main()
{
	int len = 0;
	int index = 0;
	char line[MAXLINE];

	while (len = getLine(line, MAXLINE))
	{
		printf("\nThe line received from getLine() function is: %s\t and strlen(line): %d\n", line, strlen(line));
		while (line[index] != '\0')
		{
			++index;
		}

		printf("\nline[index]: %d\n", line[index]);
		printf("\nline[index - 1]: %d\n", line[index - 1]);
		printf("\nline[index - 2]: %d\n", line[index - 2]);

		while ((line[index - 1] == '\t') || (line[index - 1] == ' ') || (line[index - 1] == '\n'))
		{
			line[index - 1] = line[index];
			--index;
		}
		printf("\nThe line after removing the trailing blanks and tabs is: %s\t and strlen(line): %d\n", line, strlen(line));
	}

	return 0;
}

int getLine(char line[], int limit)
{
	int c;
	int index = 0;

	while(((c = getchar()) != EOF) && (c != '\n'))
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
