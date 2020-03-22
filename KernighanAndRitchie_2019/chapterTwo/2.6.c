#include <stdio.h>

unsigned int setbits(unsigned int x, unsigned int startPos, unsigned int noOfBits, unsigned int y);

int main()
{
	unsigned int x;
	unsigned int y;
	unsigned int result = 0;
	unsigned int startPos = 0;
	unsigned int noOfBits = 0;

	printf("\nEnter the number x\n");
	scanf("%x", &x);
	printf("\nThe no entered x is: %x\n", x);

	printf("\nEnter the number y\n");
	scanf("%x", &y);
	printf("\nThe no entered y is: %x\n", y);

	printf("\nEnter the start position\n");
	scanf("%d", &startPos);
	printf("\nThe start position is: %d\n", startPos);

	printf("\nEnter the no of bits that should be returned\n");
	scanf("%d", &noOfBits);
	printf("\nNumber of bits that should be returned are: %d\n", noOfBits);

	result = setbits(x, startPos, noOfBits, y);

	printf("\nThe result is: %x\n", result);

	return 0;
}

unsigned int setbits(unsigned int x, unsigned int p, unsigned int n, unsigned int y)
{
	x & ~(~(~0 << n) << (p + 1 - n)) | (y & ~(~0 << n)) << (p + 1 - n);
}
