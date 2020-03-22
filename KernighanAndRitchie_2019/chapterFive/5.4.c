#include <stdio.h>
#define MAXSIZE 100

int stringEnd(char *, char *);

int main()
{
	char strOne[MAXSIZE];
	char strTwo[MAXSIZE];
	int result = 0;

	printf("\nEnter the two strings that needs to be checked\n");
	scanf("%s%s", strOne, strTwo);
	printf("\nThe two strings entered are: %s and %s\n", strOne, strTwo);

	result = stringEnd(strOne, strTwo);

	if (result == 1)
	{
		printf("\nstrTwo is present at the end of strOne\n");
	}
	else if (result == 0)
	{
		printf("\nstrTwo is not present at the end of strOne\n");
	}

	return 0;
}

int stringEnd(char *s, char *p)
{
	char *a;
	char *b;
	int length = 0;
	int lengthOfS = 0;
	a = p;
	b = s;

	while (*a++ != '\0')
	{
		++length;
	}

	while (*b++ != '\0')
	{
		++lengthOfS;
	}

	s = s + (lengthOfS - length);

	while ((*s == *p) )
	{
		if ((*s == '\0') || (*p == '\0'))
		{
			break;
		}
		else
		{
			s++;
			p++;
		}
	}

	if ((*s == '\0') && (*p == '\0'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
