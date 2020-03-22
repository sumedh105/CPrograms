#include <stdio.h>

int main()
{
	int noOfDigits[10] = {0};
	int i = 0;
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
		{
			++noOfDigits[c - '0'];
		}
	}

	for (i = 0; i < 10; ++i)
	{
		printf("\nnoOfDigits[%d]: %d\n", i, noOfDigits[i]);
	}

	return 0;
}
