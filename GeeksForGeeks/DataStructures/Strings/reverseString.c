#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 25

static void reverse_string(char *p_str);

static void reverse_string(char *p_str)
{
	char *p_end_ptr = p_str;
	char *p_start_ptr = p_str;
	char temp;

	while (*p_end_ptr != '\0')
	{
		++p_end_ptr;
	}
	--p_end_ptr;

	while (p_start_ptr < p_end_ptr)
	{
		temp = *p_start_ptr;
		*p_start_ptr = *p_end_ptr;
		*p_end_ptr = temp;

		++p_start_ptr;
		--p_end_ptr;
	}
}	

int main()
{
	char *str = NULL;

	str = (char *)malloc(MAXLENGTH * sizeof(char));

	printf("\nEnter a string that needs to be reversed\n");
	scanf("%s", str);
	printf("\nThe string that needs to be reversed is: %s\n", str);

	reverse_string(str);

	printf("\nThe string after reversing is: %s\n", str);

	return 0;
}
