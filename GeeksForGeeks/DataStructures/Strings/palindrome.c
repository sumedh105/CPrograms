#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 25

static int is_palindrome(char *str);

int main()
{
	int result = 0;
	char *str = NULL;
	str = (char *)malloc(MAXNUM * sizeof(char));

	printf("\nEnter a string\n");
	scanf("%s", str);
	printf("\nThe string entered is: %s\n", str);

	result = is_palindrome(str);

	if (result == 1)
	{
		printf("\nThe entered string is a palindrome\n");
	}
	else
	{
		printf("\nThe entered string is not a palindrome\n");
	}

	return 0;
}

static int is_palindrome(char *str)
{
	char *p_start_ptr = str;
	char *p_end_ptr = str;

	while (*p_end_ptr != '\0')
	{
		++p_end_ptr;
	}
	--p_end_ptr;

	while (p_start_ptr < p_end_ptr)
	{
		if (*p_start_ptr != *p_end_ptr)
		{
			return 0;
		}

		++p_start_ptr;
		--p_end_ptr;
	}

	return 1;
}
