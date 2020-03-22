#include <stdio.h>

int main()
{
	int c;
	int noOfTabs = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
		{
			++noOfTabs;
		}
	}

	printf("\nThe number of tabs in a text are: %d\n", noOfTabs);

	return 0;
}
