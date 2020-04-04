#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

int stackOne[MAXSIZE];
int topOne = -1;

int stackTwo[MAXSIZE];
int topTwo = -1;

static void pushOne(int data)
{
	if (topOne == (MAXSIZE - 1))
	{
		printf("\nStack overflow, can no more push an element into the stack\n");
	}

	else
	{
		stackOne[++topOne] = data;
	}
}

static void pushTwo(int data)
{
	if (topTwo == (MAXSIZE - 1))
	{
		printf("\nStack overflow, can no more push an element into the stack\n");
	}

	else
	{
		stackTwo[++topTwo] = data;
	}
}

static int popOne()
{
	int data = 0;

	if (topOne == -1)
	{
		printf("\nStack underflow, can no more remove elements from the stack\n");
	}

	else
	{
		data = stackOne[topOne--];
	}

	return data;
}

static int popTwo()
{
	int data = 0;

	if (topTwo == -1)
	{
		printf("\nStack underflow, can no more remove elements from the stack\n");
	}

	else
	{
		data = stackTwo[topTwo--];
	}

	return data;
}

static void sortInputStack()
{
	int temp = 0;

	if (topOne == -1)
	{
		printf("\nStack one is empty, cannot sort the elements\n");
	}
	
	else
	{
		while (topOne != -1)
		{
			temp = popOne();
			while ((topTwo != -1) && (stackTwo[topTwo] > temp))
			{
				pushOne(popTwo());
			}
			pushTwo(temp);
		}
	}
}

static void displayInputStack()
{
	int index = 0;

	if (topOne == -1)
	{
		printf("\nStack one is empty\n");
	}

	else
	{
		while (index <= topOne)
		{
			printf("\n%d\n", stackOne[index]);
			++index;
		}
	}
}

static void displaySortedStack()
{
	int index = 0;

	if (topTwo == -1)
	{
		printf("\nSorted stack is empty, cannot display anything\n");
	}

	else
	{
		while (index <= topTwo)
		{
			printf("\n%d\n", stackTwo[index]);
			++index;
		}
	}
}

int main()
{
	int choice = 0;

	while (1)
	{
		printf("\nEnter 1 to push an element in the input stack\n");
		printf("\nEnter 2 to pop an element from the input stack\n");
		printf("\nEnter 3 to display the input stack\n");
		printf("\nEnter 4 to sort the elements in the input stack \n");
		printf("\nEnter 5 to display the sorted stack\n");

		printf("\nEnter your choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
			{
				exit(1);
			}

			case 1:
			{
				int data = 0;

				printf("\nEnter the data that needs to be pushed in the input stack\n");
				scanf("%d", &data);
				pushOne(data);

				break;
			}

			case 2:
			{
				int data = 0;

				data = popOne();
				printf("\nThe data popped from stack one is: %d\n", data);

				break;
			}

			case 3:
			{
				displayInputStack();
				break;
			}

			case 4:
			{
				sortInputStack();
				break;
			}

			case 5:
			{
				displaySortedStack();
				break;
			}
		}
	}

	return 0;
}

