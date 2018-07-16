#include <stdio.h>

int main(int argc, char **argv)
{
	int index = 0;

	printf("\nThe number of command line arguments are: %d\n", argc);
	for (index = 0; index < argc; index++) {
		printf("%c\n", **argv);
		argv++;
	}//end of for loop

	return 0;
}//end of main function
