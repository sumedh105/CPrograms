#include <stdio.h>

unsigned int getbits(int x, int startPos, int noOfBits);

int main()
{
	unsigned int x;
	unsigned int result = 0;
	unsigned int startPos = 0;
	unsigned int noOfBits = 0;

	printf("\nEnter the number\n");
	scanf("%x", &x);
	printf("\nThe no entered is: %x\n", x);

	printf("\nEnter the start position\n");
	scanf("%d", &startPos);
	printf("\nThe start position is: %d\n", startPos);

	printf("\nEnter the no of bits that should be returned\n");
	scanf("%d", &noOfBits);
	printf("\nNumber of bits that should be returned are: %d\n", noOfBits);

	result = getbits(x, startPos, noOfBits);

	printf("\nThe result is: %x\n", result);

	return 0;
}

unsigned int getbits(int x, int startPos, int noOfBits)
{
	printf("\n%x\n", (x >> (startPos + 1 - noOfBits)));
	printf("\n%x\n", ~(0xffffffff << (startPos)));
	return ((x >> (startPos + 1 - noOfBits)) & ~(0xffffffff << startPos));
}
