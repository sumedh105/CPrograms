#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 25

static int stringLength(char *str);

int main()
{
	int length = 0;
	char *str = NULL;
	str = (char *)malloc(MAXLENGTH * sizeof(char));

	printf("\nEnter the string whose length needs to be calculated\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	length = stringLength(str);

	printf("\nThe string length is: %d\n", length);

	return 0;
}

static int stringLength(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		++count;
		++str;
	}

	return count;
}
