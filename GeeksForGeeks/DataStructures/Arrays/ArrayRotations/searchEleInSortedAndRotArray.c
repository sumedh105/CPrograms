#include <stdio.h>
#define NUM_OF_ARR_ELEMENTS 10

static void searchInAnArray(int arr[], int left, int right, int x)
{
	int mid = 0;

	mid = (left + right) / 2;

	printf("\nleft: %d\t right: %d\t mid: %d\n", left, right, mid);

	if (x == arr[mid])
	{
		printf("\nx found and is at location %d\n", mid);
	}

	else if (x > arr[0])
	{
		printf("\nOne\n");
		searchInAnArray(arr, left, mid - 1, x);
	}

	else if (x < arr[0])
	{
		printf("\nTwo\n");
		searchInAnArray(arr, mid + 1, right, x);
	}
}

int main()
{
	int index = 0;
	int n = 0;
	int x = 0;
	int left = 0;
	int right = 0;
	int arr[NUM_OF_ARR_ELEMENTS] = {0};

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements are: %d\n", n);

	printf("\nEnter an element that needs to be searched\n");
	scanf("%d", &x);
	printf("\nThe element that needs to be searched is: %d\n", x);

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

	right = n;

	printf("\nright: %d\n", right);

	searchInAnArray(arr, left, right, x);

	return 0;
}
