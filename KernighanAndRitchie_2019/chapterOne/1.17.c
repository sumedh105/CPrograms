#include <stdio.h>
#define MAXLINE 1000

int getLine(char [], int);

int main()
{
	int nc = 0;
	int index = 0;
	int len = 0;
	char line[MAXLINE] = {0};

	while (len = getLine(line, MAXLINE))
	{
		if (len > 80)
		{
			printf("\nline: %s\n", line);
		}
		else
		{
			/* Do nothing. */
		}
	}	

	return 0;
}

int getLine(char line[], int limit)
{
	int c;
	int index = 0;

	while ((c = getchar()) != EOF && (c != '\n'))
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
