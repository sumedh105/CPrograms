#include <stdio.h>
#define IN 1
#define OUT 0

static int isSpace(int c);

int main()
{
	int word_count = 0;
	int c;
	int state = 0;

	while ((c = getchar()) != EOF)
	{
		if (isSpace(c) || (c == '\n') || (c == '\t'))
		{
			state = OUT;
		}

		else if (state == OUT)
		{
			++word_count;
			state = IN;
		}
	}

	printf("\nNumber of words are: %d\n", word_count);

	return 0;
}

static int isSpace(int c)
{
	return (c == ' ');
}
