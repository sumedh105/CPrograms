#include <stdio.h>
#define MAXSIZE 100

int arr[MAXSIZE];
int top1 = -1;
int top2 = MAXSIZE;

static void push(int stackNumber, int value)
{

}

static int pop(int stackNumber)
{

}

static int peek(int stackNumber)
{

}

static void display(int stackNumber)
{

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
		printf("\nEnter 3 to peek/get the top element from the stack\n");
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
				int stackNumber = 0;
				int value = 0;

				printf("\nEnter the stacknumber and enter the value to be pushed\n");
				scanf("%d%d", &stackNumber, &value);
				push(stackNumber, value);
				break;
			}

			case 2:
			{
				int stackNumber = 0;
				int value = 0;

				printf("\nEnter the stack number from which the value must be popped\n");
				value = pop(stackNumber);
				printf("\nThe value that is popped from stack %d is: %d\n", stackNumber, value);
				break;
			}

			case 3:
			{
				int stackNumber = 0;
				int value = 0;

				printf("\nEnter the stack number whose top value has to be displayed\n");
				scanf("%d", &stackNumber);
				value = peek(stackNumber);
				printf("\nThe value at the top of stack %d is: %d\n", stackNumber, value);
				break;
			}

			case 4:
			{
				int stackNumber = 0;

				printf("\nEnter the stack number which has to be displayed\n");
				scanf("%d", &stackNumber);
				display(stackNumber);
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
