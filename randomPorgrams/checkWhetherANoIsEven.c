#include <stdio.h>

int main()
{
	int x = 0;

	printf("\nEnter a number that needs to be checked whether it is even or odd\n");
	scanf("%d", &x);
	printf("\nThe number entered is: %d\n", x);

	(x & 1) ? printf("\n%d is odd\n", x): printf("\n%d is even\n", x); 

	return 0;
}
