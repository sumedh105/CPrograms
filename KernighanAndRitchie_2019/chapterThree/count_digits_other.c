#include <stdio.h>
#define MAXNUM 100

int main()
{
	int ndigit[MAXNUM] = {0};
	int c;
	int nother = 0;
	int index = 0;

	while ((c = getchar()) != EOF)
	{
		switch(c)
		{
			case '0': case '1': case '2': case '3': case '4':
			case '5': case '6': case '7': case '8': case '9':
				ndigit[c - '0'] += 1;
				break;
			case ' ': case '\n': case '\t':
				nother++;
				break;
			default:	
				break;
		}
	}

	for (index = 0; index < 9; ++index)
	{
		printf("\nndigit[%d]: %d\n", index, ndigit[index]);
	}

	printf("\nThe no of other characters are: %d\n", nother);

	return 0;
}
