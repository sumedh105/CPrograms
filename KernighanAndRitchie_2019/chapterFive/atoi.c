#include <stdio.h>
#define MAXSIZE 100

int asciiToInt(char *s);

int main()
{
	char strOne[MAXSIZE];
	int result = 0;

	printf("\nEnter the string that needs to be converted to an integer\n");
	scanf("%s", strOne);
	printf("\nThe string that needs to be converted to an integer is: %s\n", strOne);

	result = asciiToInt(strOne);

	printf("\nThe integer converted is: %d\n", result);

	return 0;
}

int asciiToInt(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result = (result * 10) + (*s - '0');
		s++;
	}

	return result;
}
