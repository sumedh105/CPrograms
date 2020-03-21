#include <stdio.h>
#define NUM_OF_ELEMS 10

static void rightRotate(int arr[], int x, int n)
{
	int index = 0;
	int indexOne = 0;
	int tempArr[NUM_OF_ELEMS] = {0};

	for (index = 0; index < x; ++index)
	{
		tempArr[index] = arr[n - x + index];
	}

	for (index = n; index >= 0; --index)
	{
		arr[index - 1] = arr[index - 1 - x];
	}

	for (index = 0; index < x; ++index)
	{
		arr[index] = tempArr[index];
	}
}

int main()
{
	int n = 0;
	int x = 0;
	int index = 0;
	int arr[NUM_OF_ELEMS] = {0};

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered are: %d\n", n);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements in an array are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	printf("\nEnter the number by which an array should be right rotated\n");
	scanf("%d", &x);
	printf("\nThe number by which an array should be right rotated is: %d\n", x);

	rightRotate(arr, x, n);

	printf("\nArray after right rotation is:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
