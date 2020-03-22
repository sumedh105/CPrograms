#include <stdio.h>
#define MAXCHARS 1000

void escape(char s[], char t[]);

int main()
{
	int c;
	char s[MAXCHARS];
	char t[MAXCHARS];
	int index = 0;

	printf("\nFill the array s with the characters\n");
	while ((c = getchar()) != EOF)
	{
		s[index++] = c;
	}
	s[index] = '\0';

	index = 0; 
	printf("\nFill the array t with the characters\n");
	while ((c = getchar()) != EOF)
	{
		t[index++] = c;
	}
	t[index] = '\0';

	printf("\nThe arrays s and t are: %s and %s respectively\n", s, t);

	escape(s, t);

	printf("\nThe array s and t after copying t to s are: %s and %s respectively\n", s, t);

	return 0;
}

void escape(char s[], char t[])
{
	int indexOne = 0; 
	int indexTwo = 0;

	while ((s[indexOne] != '\0') && (t[indexTwo] != '\0'))
	{
		if (t[indexTwo] == '\t')
		{
			s[indexOne++] = '\\';
			s[indexOne++] = 't';
			++indexTwo;
		}
		else if (t[indexTwo] == '\n')
		{
			s[indexOne++] = '\\';
			s[indexOne++] = 'n';
			++indexTwo;
		}
		else
		{
			s[indexOne++] = t[indexTwo++];
		}
	}
}
