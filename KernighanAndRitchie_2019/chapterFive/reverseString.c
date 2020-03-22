#include <stdio.h>
#define MAXSIZE 100

void reverse(char *);

int main()
{
	char strOne[MAXSIZE];

	printf("\nEnter the string that needs to be reversed\n");
	scanf("%s", strOne);
	printf("\nThe string that needs to be reversed is: %s\n", strOne);

	reverse(strOne);

	printf("\nThe string after reversal is: %s\n", strOne);

	return 0;
}

void reverse(char *s)
{
	char *p;
	char temp;
	p = s;

	while (*(p + 1) != '\0')
	{
		p++;
	}

	while (s < p)
	{
		temp = *s;
		*s = *p;
		*p = temp;

		s++;
		p--;
	}
}
