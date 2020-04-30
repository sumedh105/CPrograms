#include <stdio.h>
#define MAXNUM 10

static int merge_sort(int arr[], int low, int high);
static void merge(int arr[], int low, int mid, int high);

int main()
{
	int arr[MAXNUM] = {0};
	int num = 0;
	int index = 0;

	printf("\nEnter the number of elements that needs to be entered in an array\n");
	scanf("%d", &num);
	printf("\nThe number of elements that needs to be entered in an array are: %d\n", num);

	printf("\nEnter the elements in an array that needs to be sorted\n");
	for (index = 0; index < num; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements entered in an array are:\n");
	for (index = 0; index < num; ++index)
	{
		printf("\n%d\n", arr[index]);
	}
	
	merge_sort(arr, 0, (num - 1));

	printf("\nThe sorted array is:\n");
	for (index = 0; index < num; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	return 0;
}

static int merge_sort(int arr[], int low, int high)
{
	if (low < high)
	{
		int mid = (low + high) / 2;
		merge_sort(arr, low, mid);
		merge_sort(arr, mid + 1, high);
		merge(arr, low, mid, high);
	}

	else
	{
		return 1;
	}
}

static void merge(int arr[], int low, int mid, int high)
{
	int nL = 0;
	int nR = 0;
	int i = 0;
	int j = 0;
	int k = 0;

	nL = (mid - low + 1);
	nR = (high - mid);

	int L[nL];
	int R[nR];

	while (i < nL)
	{
		L[i] = arr[low + i];
		++i;
	}
	while (j < nR)
	{
		R[j] = arr[mid + 1 + j];
		++j;
	}
	i = 0;
	j = 0;
	k = low;

	while ((i < nL) && (j < nR))
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			++k;
			++i;
		}
		else
		{
			arr[k] = R[j];
			++k;
			++j;
		}
	}

	while (i < nL)
	{
		arr[k] = L[i];
		++k;
		++i;
	}
	while (j < nR)
	{
		arr[k] = R[j];
		++k;
		++j;
	}
}
