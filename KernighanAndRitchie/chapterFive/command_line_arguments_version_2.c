#include <stdio.h>

int main(int argc, char **argv)
{
	int index = 0;

	printf("\nThe number of command line arguments are: %d\n", argc);
	for (index = 0; index < argc; index++) {
		printf("argv[%d]: %s\n", index, argv[index]);
	}//end of for loop

}//end of main function
