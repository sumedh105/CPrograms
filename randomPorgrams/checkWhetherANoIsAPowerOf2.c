#include <stdio.h>

int isPowerOfTwo(int num)
{
	printf("%d", (num & (num - 1)));
	printf("\n%d\n", !(num & (num - 1)));
	printf("\n%d\n", num && !(num & (num - 1)));

	return (num && !(num & (num - 1)));
}

int main()
{
	int a = 0;
	int result = 0;

	printf("\nEnter a number which has to be checked if it is a power of 2\n");
	scanf("%d", &a);
	printf("\nThe number entered is: %d\n", a);

	result = isPowerOfTwo(a);

	if (result == 1)
	{
		printf("\nThe number entered is a power of 2\n");
	}
	else
	{
		printf("\nThe number entered is a not of power of 2\n");
	}

	return 0;
}
