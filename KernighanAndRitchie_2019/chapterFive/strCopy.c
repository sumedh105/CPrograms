#include <stdio.h>
#define BUFSIZE 1000

void strCopy(char *s, char *t);

int main()
{
	char s[BUFSIZE];
	char t[BUFSIZE];
	int c;
	int index = 0;

	printf("\nEnter the string t that needs to be copied to string s\n");
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		t[index++] = c;
	}
	t[index] = '\0';
	printf("\nThe string that needs to be copied from t to s is: %s\n", t);

	strCopy(s, t);

	printf("\nThe string copied from t to s is: %s\n", s);

	return 0;
}

void strCopy(char *s, char *t)
{
	while (*t != '\0')
	{
		*s = *t;
		s++;
		t++;
	}
}

