#include <stdio.h>

int main()
{
	int c;
	int noOfBlanks = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++noOfBlanks;
		}
	}

	printf("\nNumber of blanks in a text are: %d\n", noOfBlanks);

	return 0;
}
