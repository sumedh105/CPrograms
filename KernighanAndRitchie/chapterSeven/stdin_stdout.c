#include <stdio.h>

int main()
{
	int c;

	while ((c = getc(stdin)) != EOF) {
		putc((c), stdout);
	}//end of while loop

	return 0;
}//end of main function
