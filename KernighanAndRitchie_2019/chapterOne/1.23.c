#include <stdio.h>
#define MAXLINE 1000

int getLine(char [], int);

int main()
{
	int len = 0;
	int index = 0;
	char line[MAXLINE];

	while (len = getLine(line, MAXLINE))
	{
		printf("\nThe line received from getLine() function is: %s\n", line);

		if ( ((line[index] == '/') && (line[index + 1] == '*')) || ((line[index] == '/') && (line[index + 1] == '/')) )
		{
			while (line[index] != '\n')
			{
				line[index++] = ' ';
			}
		}
		
		else
		{
			/* Do nothing. */
		}

	printf("\nThe line after removing the comments is: %s\n", line);
	}

	return 0;
}

int getLine(char line[], int max)
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
