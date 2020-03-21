#include <stdio.h>
#define NUM_OF_ELEMENTS 10

int main()
{
	int arr[NUM_OF_ELEMENTS] = {0};
	int index = 0;
	int n = 0;
	int count = 0;

	printf("\nEnter the number of elements in an array\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered is: %d\n", n);

	printf("\nEnter the elements of an array\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements of an array are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	for (index = 0; index < n; ++index)
	{
		++count;
		if (arr[index] > arr[index + 1])
		{
			break;
		}
	}

	if (index == (n - 1))
	{
		printf("\nThe rotation count is zero\n");
	}
	else
	{
		printf("\nThe rotation count is: %d\n", count);
	}

	return 0;
}
