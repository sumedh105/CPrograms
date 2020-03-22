#include <stdio.h>
#define MAXSIZE 100

int stringNCompare(char *s, char *t, int noOfBytes);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int noOfBytes = 0;
	int result = 0;

	printf("\nEnter the two strings that needs to be compared\n");
	scanf("%s%s", strOne, strTwo);
	printf("\nThe two strings that needs to be compared are: %s and %s\n", strOne, strTwo);

	printf("\nEnter the no of bytes that needs to be compared\n");
	scanf("%d", &noOfBytes);
	printf("\nThe no of bytes that needs to be compared are: %d\n", noOfBytes);

	result = stringNCompare(strOne, strTwo, noOfBytes);

	if (result < 0)
	{
		printf("\nString s is smaller than string t\n");
	}
	else if (result == 0)
	{
		printf("\nString is equal to string t\n");
	}
	else if(result > 0)
	{
		printf("\nString s is greater than string t\n");
	}

	return 0;
}

int stringNCompare(char *s, char *t, int noOfBytes)
{
	int index = 0;
	int length = 0;

	for (index = 0; index < noOfBytes; ++index)
	{
		if (*s == *t)
		{
			s++;
			t++;
		}
		else
		{
			break;
		}
	}

	if (length == noOfBytes)
		return *(s - 1) - *(t - 1);
	else
		return *s - *t;
}
