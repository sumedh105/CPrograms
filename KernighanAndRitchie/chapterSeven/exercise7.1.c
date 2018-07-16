#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	int c;

	printf("\nargv[1]: %s\n", argv[1]);

	while ((c = getchar()) != EOF) {
		if (strcmp(argv[1], "lowerToUpper") == 0) {
			putchar(toupper(c));
		}//end of if condition

		else if (strcmp(argv[1], "upperToLower") == 0) {
			putchar(tolower(c));
		}//end of else if condition
	}//end of while loop

	return 0;
}//end of main function
