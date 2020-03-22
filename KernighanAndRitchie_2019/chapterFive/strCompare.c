#include <stdio.h>
#define BUFSIZE 1000

int strCompare(char *s, char *t);

int main()
{
	char s[BUFSIZE];
	char t[BUFSIZE];
	int c;
	int indexOne = 0, indexTwo = 0;
	int result = 0;

	printf("\nEnter the two strings that needs to be compared\n");
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		s[indexOne++] = c;
	}
	s[indexOne] = '\0';

	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		t[indexTwo++] = c;
	}
	t[indexTwo] = c;

	printf("\nThe two strings entered are: %s and %s\n", s, t);

	result = strCompare(s, t);

	if (result < 0)
	{
		printf("\nString s is smaller than string t\n");
	}
	else if (result == 0)
	{
		printf("\nStrings s and t are equal\n");
	}
	else if (result > 0)
	{
		printf("\nString s is greater than string t\n");
	}

	return 0;
}

int strCompare(char *s, char *t)
{
	while (*s++ == *t++)
	{
		/* Do nothing. */
	}

	return *s - *t;
}
