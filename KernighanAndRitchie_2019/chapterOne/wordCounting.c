#include <stdio.h>

int main()
{
	int c;
	int noOfWords = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ') || (c == '\t') || (c == '\n'))
		{
			++noOfWords;
		}
		else
		{
			/* Do nothing. */
		}
	}

	printf("\nThe number of words in a text are: %d\n", noOfWords);

	return 0;
}
