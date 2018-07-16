#include <stdio.h>

int invert(int x, int p, int n);

int main()
{
	int x;
	int p;
	int n;
	int result;

	printf("\nEnter the number x\n");
	scanf("%d", &x);
	printf("\nThe entered number x is: %d\n", x);

	printf("\nEnter the number p\n");
	scanf("%d", &p);
	printf("\nThe entered number p is: %d\n", p);

	printf("\nEnter the number n\n");
	scanf("%d", &n);
	printf("\nThe entered number n is: %d\n", n);

	result = invert(x, p, n);

	printf("\nThe result is: %d\n", result);
}//end of main function

int invert(int x, int p, int n) {



}//end of invert function
