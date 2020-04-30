#include <stdio.h>
#define MAXNUM 10

static void insertion_sort(int arr[], int num);

int main()
{
	int arr[MAXNUM] = {0};
	int num = 0;
	int index = 0;

	printf("\nEnter the number of elements that needs to be entered in an array\n");
	scanf("%d", &num);
	printf("\nThe number of elements that needs to be entered in an array is: %d\n", num);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < num; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered in an array are:\n");
	for (index = 0; index < num; ++index)
	{
		printf("%d\n", arr[index]);
	}

	insertion_sort(arr, num);

	printf("\nThe sorted array is:\n");
	for (index = 0; index < num; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}

static void insertion_sort(int arr[], int num)
{
	int outer_index = 0;
	int inner_index = 0;
	int key = 0;

	for (outer_index = 1; outer_index < num; ++outer_index)
	{
		key = arr[outer_index];
		inner_index = outer_index - 1;
		while ((inner_index >= 0) && (arr[inner_index] > key))
		{
			arr[inner_index + 1] = arr[inner_index];
			--inner_index;
		}
		arr[inner_index + 1] = key;
	}
}
