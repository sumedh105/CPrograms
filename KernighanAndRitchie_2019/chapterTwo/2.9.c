#include <stdio.h>

int main()
{
	unsigned int num = 0;
	unsigned int count = 0;

	printf("\nEnter the number whose number of 1 bits are counted\n");
	scanf("%x", &num);
	printf("\nThe number entered is: %x\n", num);

	while (num)
	{
		++count;
		num = num & (num - 1);
	}

	printf("\nThe count is: %d\n", count);

	return 0;
}
