#include <stdio.h>
#define MAXNUM 10

static int isDigit(int c);

int main()
{
	int digit[MAXNUM];
	int index = 0;
	int c;

	for (index = 0; index < MAXNUM; ++index)
	{
		digit[index] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (isDigit(c))
		{
			++digit[c - '0'];
		}
	}

	for (index = 0; index < MAXNUM; ++index)
	{
		printf("%d\t", digit[index]);
	}

	return 0;
}

static int isDigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}
