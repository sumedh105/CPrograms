#include <stdio.h>
#define NUM_OF_ARRAY_ELEMENTS 10

static void rotByOne(int arr[], int n)
{
	int temp = 0;
	int index = 0;

	temp = arr[n - 1];

	for (index = (n - 1); index >= 0; --index)
	{
		arr[index] = arr[index - 1];
	}

	arr[0] = temp;
}

int main()
{
	int index = 0;
	int temp = 0;
	int n = 0;
	int arr[NUM_OF_ARRAY_ELEMENTS] = {0};

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements are: %d\n", n);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements in an array before rotation are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	rotByOne(arr, n);

	printf("\nThe elements in an array after rotation are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
