#include <stdio.h>
#define MAXSIZE 100

void stringCat(char strOne[], char strTwo[]);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];

	printf("\nEnter the two strings that needs to be concatenated\n");
	scanf("%s %s", strOne, strTwo);
	printf("\nThe two strings entered are: %s and %s\n", strOne, strTwo);

	stringCat(strOne, strTwo);

	printf("\nThe string after concatenation is: %s\n", strOne);

	return 0;
}

void stringCat(char *s, char *t)
{
	while (*s != '\0')
	{
		s++;
	}

	while (*t != '\0')
	{
		*s = *t;
		s++;
		t++;
	}
}
