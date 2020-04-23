#include <stdio.h>

int main()
{
	int c;
	int line_count = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\n')
		{
			++line_count;
		}
	}

	printf("\nNumber of lines are: %d\n", line_count);

	return 0;
}
