#include <stdio.h>

void filecopy(FILE *, FILE *);

int main()
{
	FILE *ifp, *ofp;

	ifp = fopen("input.txt", "r");
	ofp = fopen("output.txt", "w");

	if (ifp == NULL)
	{
		printf("\nInput file is not present\n");
	}

	if (ofp == NULL)
	{
		printf("\nOutput file is not present\n");
	}

	filecopy(ifp, ofp);

	return 0;
}

void filecopy(FILE *ifp, FILE *ofp)
{
	int c;

	while ((c = getc(ifp)) != EOF)
	{
		putc(c, ofp);
	}

}
