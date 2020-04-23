#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 25

static void stringCopy(char *strOne, char *strTWo);

int main()
{
	char *strOne = NULL;
	char *strTwo = NULL;
	char c; 
	int indexOne = 0;
	int indexTwo = 0;

	strOne = (char *)malloc(MAXLENGTH * sizeof(char));
	strTwo = (char *)malloc(MAXLENGTH * sizeof(char));

	printf("\nEnter the two strings\n");
	//scanf("%s%s", strOne, strTwo);

#if 1	
	while ((c = getchar()) != EOF)
	{
		strOne[indexOne] = c;
		++indexOne;
	}
	strOne[indexOne] = '\0';

	while ((c = getchar()) != EOF)
	{
		strTwo[indexTwo] = c;
		++indexTwo;
	}
	strTwo[indexTwo] = '\0';
#endif

	printf("\nThe two entered strings are: %s and %s\n", strOne, strTwo);

	stringCopy(strOne, strTwo);

	printf("\nThe copied string is: %s\n", strOne);

	return 0;
}

static void stringCopy(char *strOne, char *strTwo)
{
	char *p = strOne;

	while (*strOne != '\0')
	{
		++strOne;
	}

	while (*strTwo != '\0')
	{
		*strOne++ = *strTwo++;
	}
}
