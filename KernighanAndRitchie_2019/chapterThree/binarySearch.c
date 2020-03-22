#include <stdio.h>
#define MAXNUM 100

int binSearch(int v[], int x, int noOfElem);

int main()
{
	int v[MAXNUM] = {0};
	int index = 0;
	int noOfElem = 0;
	int x = 0;
	int result = 0;

	printf("\nEnter the no of elements to be entered in array v\n");
	scanf("%d", &noOfElem);

	printf("\nFill the array v in the increasing order\n");
	for (index = 0; index < noOfElem; ++index)
	{
		v[index] = index + 1;
	}

	printf("\nThe numbers entered in the array v are:\n");
	for (index = 0; index < noOfElem; ++index)
	{
		printf("\nv[%d]: %d\n", index, v[index]);
	}

	printf("\nEnter the number that needs to be searched\n");
	scanf("%d", &x);
	printf("\nThe number that needs to be searched is: %d\n", x);

	result = binSearch(v, x, noOfElem);

	if (result == -1)
	{
		printf("\nThe number x is not present in the array v\n");
	}
	else
	{
		printf("\nThe number is found at position: %d\n", result);
	}

	return 0;
}

int binSearch(int v[], int x, int noOfElem)
{
	int mid = 0;
	int low = 0;
	int high = (noOfElem - 1);

	mid = (low + high)/2;

	while (low <= high)
	{
		if (x < v[mid])
		{
			low = 0;
			high = mid - 1;
			mid = (low + high)/2;
		}
		else if (x > v[mid])
		{
			low = mid + 1;
			high = noOfElem - 1;
			mid = (low + high)/2;
		}
		else if (x == v[mid])
		{
			return mid;
		}
	}

	return -1;
}
