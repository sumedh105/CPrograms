#include <stdio.h>

static int fibonacci(int num);

int main()
{
	int num = 0;
	int result = 0;

	printf("\nEnter the number whose fibonacci sequence needs to be calculated\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	result = fibonacci(num);

	printf("\nThe result is: %d\n", result);

	return 0;
}

static int fibonacci(int num)
{
	int f1 = 0;
	int f2 = 0;
	int f = 0;
	int index = 0;

	if (num <= 1)
	{
		return num;
	}
	else
	{
		f1 = 0;
		f2 = 1;
		for (index = 2; index <= num; ++index)
		{
			f = f1 + f2;
			f1 = f2;
			f2 = f;
		}
		return f;
	}
}
