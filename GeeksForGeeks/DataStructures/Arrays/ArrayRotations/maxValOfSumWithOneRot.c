#include <stdio.h>
#define NUM_OF_ARRAY_ELEMS 20

static void rotByOne(int arr[], int n)
{
	int temp = 0;
	int index = 0;
	int indexOne = 0;

	temp = arr[n - 1];

	for (index = n - 1; index >= 0; --index)
	{
		arr[index] = arr[index - 1];
	}

	arr[0] = temp;
}

int main()
{
	int arr[NUM_OF_ARRAY_ELEMS] = {0};
	int n = 0;
	int max = 0;
	int maxNum = 0;
	int index = 0;
	int indexOne = 0;
	
	printf("\nEnter the number of elemetns\n");
	scanf("%d", &n);
	printf("\nThe entered element is: %d\n", n);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	for (index = 0; index < n; ++index)
	{
		maxNum = 0;
		rotByOne(arr, n);

		for (indexOne = 0; indexOne < n; ++indexOne)
		{
			maxNum += (indexOne * arr[indexOne]);
		}

		if (maxNum > max)
		{
			max = maxNum;
		}
	}

	printf("\nThe maximum sum obtained is: %d\n", max);

	return 0;
}
