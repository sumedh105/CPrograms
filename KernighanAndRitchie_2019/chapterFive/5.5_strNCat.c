#include <stdio.h>
#define MAXSIZE 100

void stringNCat(char *s, char *t, int );

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int noOfBytes = 0;

	printf("\nEnter the two strings\n");
	scanf("%s%s", strOne, strTwo);
	printf("\nThe two strings entered are: %s and %s\n", strOne, strTwo);

	printf("\nEnter the no of bytes that needs to be concatenated\n");
	scanf("%d", &noOfBytes);
	printf("\nThe no of bytes that needs to be concatenated are: %d\n", noOfBytes);

	stringNCat(strOne, strTwo, noOfBytes);

	printf("\nString one after concatenation is: %s\n", strOne);

	return 0;
}

void stringNCat(char *s, char *t, int noOfBytes)
{
	int index = 0;

	while (*s != '\0')
	{
		s++;
	}

	for (index = 0; index < noOfBytes; ++index)
	{
		*s = *t;
		s++;
		t++;
	}
}
