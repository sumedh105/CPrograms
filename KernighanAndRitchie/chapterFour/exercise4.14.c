#include <stdio.h>

#define swap(t, x, y) \
		x = x + y; \
		y = x - y; \
		x = x - y;

int main()
{
	int x, y;

	printf("\nEnter the values for x and y\n");
	scanf("%d", &x);
	scanf("%d", &y);

	printf("\nThe values entered for x and y are: %d and %d\n", x, y);

	swap(int, x, y);

	printf("\nThe values of x and y after the swap are: %d and %d\n", x, y);
	
	return 0;
}//end of main function
