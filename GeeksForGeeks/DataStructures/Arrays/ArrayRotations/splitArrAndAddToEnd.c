#include <stdio.h>
#define NUM_OF_ELEMENTS 10

static void splitArray(int arr[], int x, int n)
{
	int tempArr[NUM_OF_ELEMENTS] = {0};
	int index = 0;
	int indexOne = 0;

	/* Copy the elements from arr to temp array. */
	for (index = 0; index < x; ++index)
	{
		tempArr[index] = arr[index];
	}

	for (index = 0; (index + x) < n; ++index)
	{
		arr[index] = arr[index + x];
	}

	for (indexOne = 0; indexOne < x; ++indexOne, ++index)
	{
		arr[index] = tempArr[indexOne];
	}

}

int main()
{
	int n = 0;
	int x = 0;
	int index = 0;
	int arr[NUM_OF_ELEMENTS] = {0};

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered is: %d\n", n);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements of an array are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	printf("\nEnter the number from which the array should be split\n");
	scanf("%d", &x);
	printf("\nThe entered number is: %d\n", x);

	splitArray(arr, x, n);

	printf("\nThe elements of an array after the split are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
