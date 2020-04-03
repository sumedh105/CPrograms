#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

int topOne = -1;
int topTwo = -1;
int stackOne[MAXSIZE];
int stackTwo[MAXSIZE];

static void push(int value)
{
	if (topOne == (MAXSIZE -1))
	{
		printf("\nStack is full, nothing can be pushed in the stack\n");
	}
	else
	{
		stackOne[++topOne] = value;
	}
}

static int pop()
{
	int value = 0;
	if (topOne == -1)
	{
		printf("\nStack is empty, nothing can be popped\n");
	}

	if (topTwo == -1)
	{
		while (topOne != -1)
		{
			stackTwo[++topTwo] = stackOne[topOne--];
		}

		value = stackTwo[topTwo--];

		while (topTwo != -1)
		{
			stackOne[++topOne] = stackTwo[topTwo--];
		}
	}

	return value;
}

static void display()
{
	int index = 0;

	if (topOne == -1)
	{
		printf("\nStack empty, nothing can be displayed\n");
	}
	else
	{
		while (index <= topOne)
		{
			stackOne[index];
			printf("\n%d\n", stackOne[index]);
			++index;
		}
	}
}

int main()
{
	int choice = 0;

	while (1)
	{
		printf("\nEnter 1 to push an element in a queue, i.e., enqueue\n");
		printf("\nEnter 2 to remove an element from a queue, i.e., dequeue\n");
		printf("\nEnter 3 to display the queue\n");

		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
			{
				exit(1);
			}

			case 1:
			{
				int value = 0;

				printf("\nEnter the value that needs to be pushed\n");
				scanf("%d", &value);
				push(value);

				break;
			}

			case 2:
			{
				int value = 0;

				value = pop();
				printf("\nThe popped value is: %d\n", value);

				break;
			}

			case 3:
			{
				display();
				break;
			}

			default:
			{
				break;
			}

		}
	}

	return 0;
}
