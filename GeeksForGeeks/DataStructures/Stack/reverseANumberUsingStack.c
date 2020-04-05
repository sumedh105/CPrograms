#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20

int stack[MAXSIZE];
int top = -1;

static void push(int data)
{
	if (top == (MAXSIZE - 1))
	{
		printf("\nStack onverflow, nothing can be pushed in the stack\n");
	}

	else
	{
		stack[++top] = data;
	}
}

static int pop()
{
	int data = 0;

	if (top == -1)
	{
		printf("\nStack undeflow, nothing can be popped from the stack\n");
		return -1;
	}

	else
	{
		data = stack[top--];
		return data;
	}
}

static void reverse(int *arr, int n)
{
	int index = 0;

	if (*arr == '\0')
	{
		printf("\nThe integer array is empty, nothing can be reversed\n");
	}

	else
	{
		while (index < n)
		{
			push(arr[index]);
			++index;
		}

		while (top != -1)
		{
			printf("%d", pop());
		}

		printf("\n");
	}

}

int main()
{
	int n = 0;
	int index = 0;
	int *arr = NULL;

	printf("\nEnter the number of elements that needs to be inserted in an array\n");
	scanf("%d", &n);

	arr = (int *)malloc(n * sizeof(int));

	printf("\nEnter the elements in an array that needs to be reversed\n");
	for (index = 0; index < n; ++index)
	{
		scanf("%d", &arr[index]);
	}

	printf("\nThe elements of an array that needs to be reversed are:\n");
	for (index = 0; index < n; ++index)
	{
		printf("\n%d\n", arr[index]);
	}

	printf("\nThe reversed elements are:\n");
	reverse(arr, n);

	return 0;
}

