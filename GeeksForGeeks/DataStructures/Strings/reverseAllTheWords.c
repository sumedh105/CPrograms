#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 25

int main()
{
	int c;
	int index = 0;
	char *p_main_string = NULL;
	char *p_start_pointer = NULL;
	char *p_end_pointer = NULL;
	char temp;

	p_main_string = (char *)malloc(MAXNUM * sizeof(char));

	while ((c = getchar()) != EOF)
	{
		p_main_string[index] = c;
		++index;
	}
	p_main_string[--index] = '\0';

	printf("\nThe string entered is: %s\n", p_main_string);

	p_start_pointer = p_main_string;
	p_end_pointer = p_main_string;

	while (*p_end_pointer != '\0')
	{
		++p_end_pointer;
	}
	--p_end_pointer;
	
	while (p_start_pointer < p_end_pointer)
	{
		temp = *p_start_pointer;
		*p_start_pointer = *p_end_pointer;
		*p_end_pointer = temp;

		++p_start_pointer;
		--p_end_pointer;
	}

	printf("\nThe reversed string is: %s\n", p_main_string);

	return 0;
}
