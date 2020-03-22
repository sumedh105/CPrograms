#include <stdio.h>
#define NUM_MAX_ELEMENTS 10

static int findPair(int arr[], int num, int n)
{
	int index = 0;
	int indexOne = 0;

	for (index = 0; index < n; ++index)
	{
		for (indexOne = index + 1; indexOne < n; ++indexOne)
		{
			if ((arr[index] + arr[indexOne]) == num)
			{
				return 1;
			}
		}
	}

	return 0;
}

int main()
{
	int arr[NUM_MAX_ELEMENTS] = {0};
	int index = 0;
	_Bool result = 0;
	int num = 0;
	int n = 0;

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered are: %d\n", n);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered in an array are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	printf("\nEnter a number with a given sum\n");
	scanf("%d", &num);

	result = findPair(arr, num, n);

	if (result == 1)
	{
		printf("\nArray has a pair with a given sum\n");
	}
	else
	{
		printf("\nArray does not have a pair with a given sum\n");
	}

	return 0;
}
