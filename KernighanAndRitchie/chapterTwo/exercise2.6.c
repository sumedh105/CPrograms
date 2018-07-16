#include <stdio.h>

int setbits(int x, int p, int n, int y);

int main()
{
	int x;
	int p;
	int n;
	int y;
	int result;

	printf("\nEnter the number x\n");	
	scanf("%d", &x);
	printf("\nThe number entered is: %d\n", x);

	printf("\nEnter the number p\n");	
	scanf("%d", &p);
	printf("\nThe number entered is: %d\n", p);

	printf("\nEnter the number n\n");	
	scanf("%d", &n);
	printf("\nThe number entered is: %d\n", n);

	printf("\nEnter the number y\n");	
	scanf("%d", &y);
	printf("\nThe number entered is: %d\n", y);

	result = setbits(x, p, n, y);

	printf("\nThe result is: %d\n", result);

	return 0;
}//end of main function

int setbits(int x, int p, int n, int y) {


}//end of setbits function
