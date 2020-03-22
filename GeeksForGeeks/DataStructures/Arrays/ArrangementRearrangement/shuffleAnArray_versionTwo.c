#include <stdio.h>
#include <stdlib.h>
#define NUM_OF_ELEMENTS 10

static void shuArr(int arr[], int n)
{
	int index = 0;
	int indexOne = 0;
	int temp = 0;

	for (index = 0; index < n; ++index)
	{
		indexOne = rand() % n;
		printf("\nindex: %d\t indexOne: %d\n", index, indexOne);

		temp = arr[indexOne];
		arr[indexOne] = arr[index];
		arr[index] = temp;
	}
}

int main()
{
	int n = 0;
	int index = 0;
	int arr[NUM_OF_ELEMENTS] = {0};

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered is: %d\n", n);

	printf("\nEnter the number of elements in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered in an array are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	shuArr(arr, n);

	printf("\nThe elements in an array after shuffling is:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
