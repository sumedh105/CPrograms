#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("\nNo of command line arguments are: %d\n", argc);
	while (argc > 0)
	{
		printf("\n*argv: %s\n", *argv);
		--argc;
		++argv;
	}	

	return 0;
}
