#include <stdio.h>

int main()
{
	int num = 0;
	int count = 0;

	printf("\nEnter the number whose number of bits has to be counted\n");
	scanf("%d", &num);

	while (num)
	{
		num = num & (num - 1);
		++count;
	}

	printf("\nNumber of bits in the integer are %d\n", count);

	return 0;
}
