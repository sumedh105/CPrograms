#include <stdio.h>

static int factorial(int num);

int main()
{
	int num = 0;
	int result = 0;

	printf("\nEnter a number whose factorial needs to be calculated\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	result = factorial(num);

	printf("\nThe factorial of a number %d is: %d\n", num, result);

	return 0;
}

static int factorial(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return (num * factorial(num - 1));
	}
}
