#include <stdio.h>

int power(int base, int exponent)
{
	int result = 1;
	int i = 0;

	for (i = 0; i < exponent; ++i)
	{
		result = result * base;
	}
	
	return result;
}

int main()
{
	int base = 0;
	int exponent = 0;
	int result = 0;

	printf("\nEnter the base and the exponent\n");
	scanf("%d%d", &base, &exponent);
	printf("\nThe base and the exponent are: %d and %d\n", base, exponent);

	result = power(base, exponent);

	printf("\nThe result is: %d\n", result);

	return 0;
}
