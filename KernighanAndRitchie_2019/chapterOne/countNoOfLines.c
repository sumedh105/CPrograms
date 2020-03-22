#include <stdio.h>

int main()
{
	int noOfLines = 0;
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++noOfLines;
		}
	}

	printf("\nNumber of lines in a text are: %d\n", noOfLines);

	return 0;
}
