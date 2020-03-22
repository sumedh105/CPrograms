#include <stdio.h>
#define MAXLINE 100

int getLine(char [], int);
void reverse(char []);

int main()
{
	int c;
	int index = 0;
	char line[MAXLINE];

	while (getLine(line, MAXLINE))
	{
		printf("\nThe line entered is: %s\n", line);
		reverse(line);
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

void reverse(char arr[])
{
	int c;
	int index = 0;
	int indexOne = 0;

	while(arr[indexOne] != '\0')
	{
		indexOne++;
	}
	indexOne -= 1;

	while (index < indexOne)
	{
		c = arr[index];
		arr[index] = arr[indexOne];
		arr[indexOne] = c;

		++index;
		--indexOne;
	}

	printf("\nThe reversed line is: %s\n", arr);
}
