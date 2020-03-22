#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t biggest = 0x7fffffff;

	printf("\nThe string is: %s\n", ctime(&biggest));

	return 0;
}
