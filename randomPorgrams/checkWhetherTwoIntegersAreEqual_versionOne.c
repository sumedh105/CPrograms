#include <stdio.h>

static int isEqual(int a, int b)
{
	return (a == b);
}

int main()
{
	int a = 0;
	int b = 0;
	int result = 0;

	printf("\nEnter the two integers that needs to be checked for equality\n");
	scanf("%d%d", &a, &b);

	result = isEqual(a, b);

	printf("\nresult: %d\n", result);

	if (result == 0)
	{
		printf("\nThe two numbers are not equal\n");
	}
	else
	{
		printf("\nThe two numbers are equal\n");
	}

	return 0;
}
