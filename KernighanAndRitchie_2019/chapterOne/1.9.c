#include <stdio.h>

int main()
{
	int c;
	int nc = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			++nc;

			if (nc == 1)
			{
				putchar(c);
			}
			else
			{
				//Do not do anything
			}
		}
		else
		{
			nc = 0;
			putchar(c);
		}
	}

	return 0;
}

