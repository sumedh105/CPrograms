#include <stdio.h>
#define MAXno_of_elements 10

static int partition(int arr[], int start, int end);
static void q_sort(int arr[], int start, int end);

int main()
{
	int arr[MAXno_of_elements] = {0};
	int index = 0;
	int no_of_elements = 0;

	printf("\nEnter the no_of_elementsber of elements that needs to be entered\n");
	scanf("%d", &no_of_elements);
	printf("\nThe no_of_elementsber of elements entered are: %d\n", no_of_elements);

	printf("\nEnter the elements in an array\n");
	for(index = 0; index < no_of_elements; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements in an array that needs to be sorted are:\n");
	for (index = 0; index < no_of_elements; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	q_sort(arr, 0, no_of_elements - 1);

	printf("\nThe sorted array is:\n");
	for (index = 0; index < no_of_elements; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}

static int partition(int arr[], int start, int end)
{
	int pivot = 0;
	int p_index = 0;
	int index = 0;
	int temp = 0;

	pivot = arr[end];
	p_index = start;

	for (index = start; index < end; ++index)
	{
		if (arr[index] <= pivot)
		{
			temp = arr[p_index];
			arr[p_index] = arr[index];
			arr[index] = temp;

			++p_index;
		}
	}
	arr[end] = arr[p_index];
	arr[p_index] = pivot; 

	return p_index;
}

static void q_sort(int arr[], int start, int end)
{
	int p_index = 0;

	if (start < end)
	{
		p_index = partition(arr, start, end);
		q_sort(arr, 0, p_index - 1);
		q_sort(arr, p_index + 1, end);
	}
}
