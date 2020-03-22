#include <stdio.h>

int main()
{
	int c;
	int nc = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;
	}

	printf("\nThe number of characters entered are: %d\n", nc);

	return 0;
}

