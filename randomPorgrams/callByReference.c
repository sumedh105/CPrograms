#include <stdio.h>

void call(int A[])
{
	printf("\nsizeof(A): %d\n", sizeof(A));
	printf("\nA[0]: %d\n", A[0]);
	printf("\nA[1]: %d\n", A[1]);
	printf("\nA[2]: %d\n", A[2]);
}

int main()
{
	int A[] = {1, 2, 3, 4, 5};
	printf("\nsizeof(A): %d\n", sizeof(A));
	
	call(A);
	return 0;
}
