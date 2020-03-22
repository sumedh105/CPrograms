#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	int c1, c2, lineNoOne, lineNoTwo;
	int flag = 0;

	fp1 = fopen("one.txt", "r");
	fp2 = fopen("two.txt", "r");

	while (((c1 = getc(fp1)) != EOF) && ((c2 = getc(fp2)) != EOF))
	{
		if (c1 == c2)
		{
			/* Do nothing */
			flag = 0;
		}

		else if (c1 != c2)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 0)
	{
		printf("\nBoth the files match\n");
	}

	else if (flag == 1)
	{
		printf("\nThe files do not match\n");
	}

	return 0;
}
