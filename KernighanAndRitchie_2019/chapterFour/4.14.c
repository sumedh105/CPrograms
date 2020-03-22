#include <stdio.h>
#define swap(t, x, y) {t z; \
			z = y; \
			y = x; \
			x = z;}

int main()
{
	int x, y;

	printf("\nEnter the two numbers x and y\n");
	scanf("%d%d", &x, &y);
	printf("\nThe two numbers entered are %d and %d\n", x, y);

	swap(int, x, y);

	printf("\nThe two numbers after swapping are %d and %d\n", x, y);
}
