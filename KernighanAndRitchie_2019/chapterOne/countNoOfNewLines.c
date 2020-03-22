#include <stdio.h>

int main()
{
	int c;
	int noOfNewLines = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++noOfNewLines;
		}
	}

	printf("\nNumber of newlines in a text are: %d\n", noOfNewLines);

	return 0;
}
