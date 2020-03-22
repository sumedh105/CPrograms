/* Program to segregate even and odd numbers. All the even numbers should be present first and odd numbers later. */

#include <stdio.h>
#define NUM_OF_ELEMS 10

static void segEvenAndOdd(int arr[], int n)
{
	int index = 0;
	int indexOne = -1;
	int temp = 0;

	while (index < n)
	{
		if ((arr[index] % 2) == 0)
		{
			++indexOne;

			temp = arr[index];
			arr[index] = arr[indexOne];
			arr[indexOne] = temp;

		}
		++index;
	}
}

int main()
{
	int arr[NUM_OF_ELEMS] = {0};
	int index = 0;
	int n = 0;

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered is: %d\n", n);

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

	segEvenAndOdd(arr, n);

	printf("\nArray after segregation is:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
