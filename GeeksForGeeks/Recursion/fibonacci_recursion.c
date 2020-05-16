#include <stdio.h>

static int fibonacci(int num);

int main()
{
	int num = 0;
	int result = 0;

	printf("\nEnter the number whose fibonacci sequence needs to be found out\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	result = fibonacci(num);

	printf("\nThe result is: %d\n", result);
	
	return 0;
}

static int fibonacci(int num)
{
	if (num <= 1)
	{
		return num;
	}
	else
	{
		return (fibonacci(num - 1) + fibonacci(num - 2));
	}
}
