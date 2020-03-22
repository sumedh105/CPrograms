#include <stdio.h>

int main(int argc, char *argv[])
{
	int index = 0;

	printf("\nNumber of command line arguments passed are: %d\n", argc);
	for (index = 1; index < argc; ++index)
	{
		printf("\nargv[index]: %s\n", argv[index]);
	}

	return 0;
}
