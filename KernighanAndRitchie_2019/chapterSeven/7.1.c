#include <stdio.h>
#include <string.h>

int toUpper(int);
int toLower(int);

int main(int argc, char *argv[])
{
	int c;

	printf("\nargv[0]: %s\n", argv[0]);
	if (strcmp(argv[1], "toUpper") == 0)
	{
		while ((c = getchar()) != EOF)
		{
			if (c != '\n')
				putchar(toUpper(c));
		}
	}

	else if (strcmp(argv[1], "toLower") == 0)
	{
		while ((c = getchar()) != EOF)
		{
			if (c != '\n')
				putchar(toLower(c));
		}
	}	

	return 0;
}

int toUpper(int c)
{
	int a;
	a = c - 32;

	return (a);
}

int toLower(int c)
{
	int a;
	a = c + 32;

	return (a);
}
