#include <stdio.h>

int main()
{
	unsigned int num = 0;
	unsigned int count = 0;

	printf("\nEnter the number whose 1 bits should be counted\n");
	scanf("%x", &num);
	printf("\nThe number entered is: %x\n", num);

	for (count = 0; num != 0; num = num >> 1)
		if ((num & 0x1) == 1)
			++count;
	
	printf("\ncount: %d\n", count);

	return 0;
}
