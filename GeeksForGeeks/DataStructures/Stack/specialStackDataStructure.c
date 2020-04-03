#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
#define MAXNUM 1000000

int stack[MAXSIZE];
int auxStack[MAXSIZE];
int stackTop = -1;
int auxStackTop = -1;

static void push(int value)
{
	if (stackTop == (MAXSIZE - 1))
	{
		printf("\nStack overflow, both the stacks are full, nothing can be pushed\n");
	}
	else if (stackTop == -1)
	{
		stack[++stackTop] = value;
		auxStack[++auxStackTop] = value;
	}
	else
	{
		stack[++stackTop] = value;
		if (value < auxStack[auxStackTop])
		{
			auxStack[++auxStackTop] = value;
		}
		else
		{
			auxStack[++auxStackTop] = auxStack[auxStackTop];
		}
	}
}

static int pop()
{
	if (stackTop == -1)
	{
		printf("\nStack underflow, nothing can be popped from the stack\n");
		return -1;
	}

	else
	{
		auxStack[auxStackTop--];
		return stack[stackTop--];
	}
}

static int getMin()
{
	return auxStack[auxStackTop];
}

static void display()
{
	int index = 0;

	while (index < MAXSIZE)
	{
		printf("\n%d\n", stack[index]);
		++index;
	}
}

int main()
{
	int stackNumber = 0;
	int choice = 0;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to push an element in the stack\n");
		printf("\nEnter 2 to pop an element from the stack\n");
		printf("\nEnter 3 to get the minimum value from the stack\n");
		printf("\nEnter 4 to display the stack\n");

		printf("\nEnter choice\n");
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

				printf("\nEnter the value to be pushed\n");
				scanf("%d", &value);
				push(value);
				break;
			}

			case 2:
			{
				int value = 0;

				value = pop();
				printf("\nThe value that is popped from stack is: %d\n", value);
				break;
			}

			case 3:
			{
				int value = 0;

				value = getMin();
				printf("\nThe minimum value in the stack is: %d\n", value);
				break;
			}

			case 4:
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
