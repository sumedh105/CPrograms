#include <stdio.h>

unsigned int invert(unsigned int, unsigned int, unsigned int);

int main()
{
	unsigned int x;
	unsigned int p;
	unsigned int n;
	unsigned int result = 0;

	printf("\nEnter the number x\n");
	scanf("%x", &x);
	printf("\nThe number x entered is: %x\n", x);

	printf("\nEnter the position p\n");
	scanf("%d", &p);
	printf("\nThe position p entered is: %d\n", p);

	printf("\nEnter the no of bits\n");
	scanf("%d", &n);
	printf("\nNo of bits entered are: %d\n", n);

	result = invert(x, p, n);

	printf("\nThe result is: %x\n", result);

	return 0;
}

unsigned int invert(unsigned int x, unsigned int p, unsigned int n)
{
	return x ^ (~(~0 << n) << (p + 1 - n));
}
