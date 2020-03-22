#include <stdio.h>
#define NUM_OF_ELEMS 10

static void posNeg(int arr[], int n)
{
	int positive = 0;
	int negative = 1;
	int temp = 0;

	while (1)
	{
		temp = 0;
		while ((positive < n) && (arr[positive] >= 0))
		{
			positive += 2;
		}

		while ((negative < n) && (arr[negative] <= 0))
		{
			negative += 2;
		}
	
		if ((positive < n) && (negative < n))
		{	
			temp = arr[positive];
			arr[positive] = arr[negative];
			arr[negative] = temp;
		}
		else
		{
			break;
		}
	}
}

int main()
{
	int arr[NUM_OF_ELEMS] = {0};
	int index = 0;
	int n = 0;

	printf("\nEnter the number of elements\n");
	scanf("%d", &n);
	printf("\nThe number of elements entered are: %d\n", n);

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

	posNeg(arr, n);

	printf("\nElements in an array after rearranging are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}
