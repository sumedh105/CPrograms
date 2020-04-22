#include <stdio.h>

int main(int argc, char **argv)
{
	int index = 0;
	
	printf("\nNumber of command line arguments are: %d\n", argc);
	for (index = 0; index < argc; ++index)
	{
		printf("\nThe command line arguments are: %s\n", argv[index]);
	}

	return 0;
}

