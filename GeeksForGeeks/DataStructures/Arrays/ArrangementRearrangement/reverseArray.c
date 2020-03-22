#include <stdio.h>
#define NUM_OF_ELEMS 10

static void revArr(int arr[], int n)
{
	int temp = 0;
	int startIndex = 0;
	int endIndex = 0;

	endIndex = n - 1;

	while (startIndex < endIndex)
	{
		temp = arr[endIndex];
		arr[endIndex] = arr[startIndex];
		arr[startIndex] = temp;

		++startIndex;
		--endIndex;
	}
}

int main()
{
	int arr[NUM_OF_ELEMS] = {0};
	int index = 0;
	int n = 0;

	printf("\nEnter the number of elemetns\n");
	scanf("%d", &n);
	printf("\nThe number of elemetns entered are: %d\n", n);

	printf("\nEnter the elemetns in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered in an array are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	revArr(arr, n);

	printf("\nArray after reversing is:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
