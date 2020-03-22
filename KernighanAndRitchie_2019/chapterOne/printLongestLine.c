#include <stdio.h>
#define NUM_LINES 100

int main()
{
	int c;
	char line[NUM_LINES];
	char longest[NUM_LINES];
	int nc = 0;
	int max = 0;
	int index = 0;
	int indexOne = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			if (nc > max)
			{
				max = nc;
				for (indexOne = 0; indexOne < index; indexOne++)
				{
					longest[indexOne] = line[indexOne];
				}
				index = 0;	
			}
		}
		else
		{
			line[index++] = c;
			++nc;
		}
	}

	printf("The longest line entered is: %s\n", longest);

	return 0;
}
