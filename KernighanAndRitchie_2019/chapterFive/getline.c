#include <stdio.h>

int getLine(char *);

int main()
{
	char strOne[1000];
	char *p;
	p = strOne;

	while (getLine(p) > 0)
	{
		printf("\np: %s\n", p);
	}

	return 0;
}

int getLine(char *p)
{
	int index = 0;
	int c;
	char *s;
	s = p;

	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		*s++ = c;		
		++index;
	}

	if (c == '\n')
	{
		*s++ = c;
	}
	*s = '\0';

	printf("\nindex: %d\n", index);
	return index;
}
