#include <stdio.h>

int main()
{
	char ch;

	printf("\nEnter a character that needs to be converted from lower case to upper case\n");
	scanf("%c", &ch);
	printf("\nThe character entered is: %c\n", ch);

	ch = (ch - 32);

	printf("\nThe character converted from lower to upper case is: %c\n", ch);

	return 0;
}
