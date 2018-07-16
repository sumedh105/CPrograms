#include <stdio.h>

int main()
{
	int num = 0;
	int bitcount = 0;

	printf("\nEnter the number\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	while (num != 0) {
		++bitcount;
		printf("\nBefore: num is: %d\t and num - 1 is: %d\n", num, (num - 1));
		num = num & (num - 1);
		printf("\nAfter: num is: %d\t and num - 1 is: %d\n", num, (num - 1));
	}//end of while loop

	printf("\nBit count is: %d\n", bitcount);

	return 0;
}//end of main function
