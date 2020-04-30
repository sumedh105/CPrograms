#include <stdio.h>
#define MAXNUM 10

static void selection_sort(int arr[], int num);

int main()
{
	int index = 0;
	int arr[MAXNUM] = {0};
	int num = 0;

	printf("\nEnter the number of elements that needs to be entered in an array\n");
	scanf("%d", &num);
	printf("The number of elements are: %d", num);

	printf("\nEnter the elements in an array\n");
	for (index = 0; index < num; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered in an array are:\n");
	for (index = 0; index < num; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	selection_sort(arr, num);

	printf("\nThe sorted array is:\n");
	for (index = 0; index < num; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}

static void selection_sort(int arr[], int num)
{
	int outer_index = 0;
	int inner_index = 0;
	int min = 0;
	int temp = 0;

	for (outer_index = 0; outer_index < num; ++outer_index)
	{
		min = outer_index;
		for (inner_index = outer_index + 1; inner_index < num; ++inner_index)
		{
			if (arr[inner_index] < arr[min])
			{
				min = inner_index;
			}
		}
		temp = arr[min];
		arr[min] = arr[outer_index];
		arr[outer_index] = temp;
	}
}
