#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 25

int main()
{
	char *p_str = NULL;
	int char_count = 0;
	char c;

	p_str = (char *)malloc(MAXLENGTH * sizeof(char));

	if (p_str == NULL)
	{
		printf("\nHeap full, no memory left on heap\n");
	}

	while ((c = getchar()) != EOF)
	{
		++char_count;
	}

	printf("\nThe number of characters in a string are: %d\n", char_count);

	free(p_str);

	return 0;
}
