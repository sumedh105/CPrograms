#include <stdio.h>
#define MAXCHARS 1000
#define TABS 8

int main()
{
	int c;
	char line[MAXCHARS];
	int index = 0;
	int indexOne = 0;

	while ((c = getchar()) != EOF)
	{
		line[index++] = c;
	}
	line[index] = '\0';

	printf("\nThe line entered is: %s\n", line);

	index = 0;

	while (line[index] != '\0')
	{
		if (line[index] == '\t')
		{
			for (indexOne = 0; indexOne < TABS; ++indexOne)
			{
				line[indexOne] = ' ';			
			}
		}

		else
		{
			/* Do nothing. */
		}

		++index;
	}

	printf("\nThe line is: %s\n", line);

	return 0;
}
