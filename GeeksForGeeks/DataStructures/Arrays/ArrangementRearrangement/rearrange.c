/* Rearrange an array such that A[i] = i. All elements might not be present in an array. If an element is not present,
 * -1 will be present in the array. */

#include <stdio.h>
#define NUM_OF_ELEMENTS 10

static void arrRearr(int arr[], int n)
{
	int finArr[NUM_OF_ELEMENTS] = {0};
	int index = 0;
	int indexOne = 0;
	int flag = 0;

	printf("\nOne\n");
	for (index = 0; index < n; ++index)
	{
		for (indexOne = 0; indexOne < n; ++indexOne)
		{
			flag = 0;
			if (arr[indexOne] == index)
			{
				finArr[index] = index;
				flag = 1;
				break;
			}
		}

		if (flag == 0)
		{
			finArr[index] = -1;
		}
	}
	printf("\nTwo\n");

	for (index = 0; index < n; ++index)
	{
		arr[index] = finArr[index];
	}
	printf("\nThree\n");
}

int main()
{
	int arr[NUM_OF_ELEMENTS] = {0};
	int index = 0;
	int n = 0;

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements are: %d\n", n);

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

	arrRearr(arr, n);

	printf("\nArray after rearranging is:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
