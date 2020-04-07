#include <stdio.h>

int main()
{
	char ch;

	printf("\nEnter a character that should be converted from upper case to lower case\n");
	scanf("%c", &ch);
	printf("\nThe character that needs to be converted from upper case to lower case is: %c\n", ch);

	ch = ch | 32;

	printf("\nThe character coverted from upper case to lower case is: %c\n", ch);

	return 0;
}
