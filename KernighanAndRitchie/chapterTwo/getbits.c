#include <stdio.h>

int getbits(int x, int p, int n);

int main()
{
	int x;
	int p;
	int n;
	int result = 0;

	printf("\nEnter the positive number\n");
	scanf("%d", &x);
	printf("\nThe number entered is: %d\n", x);

	printf("\nEnter the starting position\n");
	scanf("%d", &p);
	printf("\nThe starting position entered is: %d\n", p);

	printf("\nEnter the number of bits that needs to be returned from the starting position\n");
	scanf("%d", &n);
	printf("\nThe entered number of bits are: %d\n", n);

	result = getbits(x, p, n);
	printf("\nThe result is: %d\n", result);

	return 0;
}//end of main function

int getbits(int x, int p, int n) {
	//return (x >> ((p - n) + 1) & ~(~0 << n));	
	return (x >> ((p - n) + 1) & (~0));	
}//end of getbits function
