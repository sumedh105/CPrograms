#include <stdio.h>
#define NUM_OF_ARRAY_ELEMENTS 100

static void rotate(int arr[], int d, int n)
{
	int tempArr[n];
	int index = 0;
	int indexOne = 0;

	printf("\nInitialize the temp array by zero\n");
	for (index = 0; index < n; ++index)
	{
		tempArr[index] = 0;
	}

	for (index = 0; index < d; ++index)
	{
		tempArr[index] = arr[index];
	}

	for (index = 0; index + d < n; ++index)
	{
		arr[index] = arr[index + d];
	}

	for (indexOne = 0; indexOne < d; ++indexOne, ++index)
	{
		arr[index] = tempArr[indexOne];
	}

}


int main()
{
	int n = 0;
	int d = 0;
	int index = 0;
	int arr[NUM_OF_ARRAY_ELEMENTS] = {0};

	printf("\nEnter the number of array elements\n");
	scanf("%d", &n);
	printf("\nThe no of array elements entered are: %d\n", n);

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

	printf("\nEnter the number by which an array should be rotated\n");
	scanf("%d", &d);
	printf("\nThe number by which an array is rotated is: %d\n", d);

	rotate(arr, d, n);

	printf("\nThe elements in an array after rotation are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
