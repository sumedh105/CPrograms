#include <stdio.h>
#define MAXCHAR 100

char *StrChr(char *, char);

int main()
{

	char str[100];
	char ch = 'S';
	char *ptr;

	printf("\nEnter the string which needs to be scanned\n");
	scanf("%s", str);
	printf("\nThe string that needs to be scanned is: %s\n", str);

	ptr = StrChr(str, ch);

	if (ptr == NULL)
	{
		printf("\nThe character is not present in the string\n");
	}
	else
	{
		printf("\nThe character is present in the string and the address of the character is: %p\n", ptr);
	}

	return 0;
}

char *StrChr(char *str, char ch)
{
	while (*str != '\0')
	{
		if (ch == *str)
			return str;

		str++;
	}

	return NULL;
}
