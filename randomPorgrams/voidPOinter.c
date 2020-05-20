#include <stdio.h>

int main()
{
	int *ptr = NULL;
	int a = 10;

	ptr = &a;
	printf("\nptr: %p\t &a: %p\n", ptr, &a);

	return 0;
}
