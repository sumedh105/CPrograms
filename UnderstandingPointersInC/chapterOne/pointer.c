#include <stdio.h>

int *func(int, int);

int main()
{
	int *p;

	p = func(10, 20);
	printf("\np: %u\n", p);
	printf("\n*p: %d\n", *p);

}

int *func(int a, int b)
{
	int p = 30;

	if (a >= 5)
		return &p;
}
