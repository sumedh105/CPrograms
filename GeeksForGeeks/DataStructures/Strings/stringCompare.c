#include <stdio.h>
#include <stdlib.h>
#define MAXNAME 25

static int stringCompare(char *StrOne, char *StrTwo);

int main()
{
	char *strOne = NULL;
	char *strTwo = NULL;
	int result = 0;

	strOne = (char *)malloc(MAXNAME * sizeof(char));
	strTwo = (char *)malloc(MAXNAME * sizeof(char));

	printf("\nEnter two strings that needs to be compared\n");
	scanf("%s%s", strOne, strTwo);

	result = stringCompare(strOne, strTwo);

	if (result == 0)
	{
		printf("\nTwo strings are equal\n");
	}
	else if (result == 1)
	{
		printf("\nTwo strings are not equal\n");
	}

	return 0;
}

static int stringCompare(char *strOne, char *strTwo)
{
	while ((*strOne != '\0') && (*strTwo != '\0'))
	{
		if (*strOne != *strTwo)
		{
			break;
		}

		++strOne;
		++strTwo;
	}

	if ((*strOne == '\0') && (*strTwo == '\0'))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
