#include <stdio.h>
#define MAXSIZE 100

void stringNCopy(char *s, char *p, int n);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int noOfBytes = 0;

	printf("\nEnter the string that needs to be copied to strOne\n");
	scanf("%s", strTwo);
	printf("\nThe string entered is: %s\n", strTwo);

	printf("\nEnter the no of bytes that needs to be copied from strTwo to strOne\n");
	scanf("%d", &noOfBytes);
	printf("\nThe no of bytes that needs to be copied from strTwo to strOne: %d\n", noOfBytes);

	stringNCopy(strOne, strTwo, noOfBytes);

	printf("\nThe string one after copying the string two: %s\n", strOne);

	return 0;
}

void stringNCopy(char *s, char *p, int n)
{
	int index = 0;

	for (index = 0; index < n; ++index)
	{
		*s = *p;
		s++;
		p++;
	}	
	*s = '\0';
}

