#include <stdio.h>

int main()
{
	int c;
	int tabs_count = 0;
	int line_count = 0;
	int blanks_count = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++line_count;
		}

		else if (c == '\t')
		{
			++tabs_count;
		}

		else if (c == ' ')
		{
			++blanks_count;
		}
	}

	printf("\nNo of lines, tabs and blanks in a text are: %d %d and %d respectively\n", line_count, tabs_count, blanks_count);

	return 0;
}
