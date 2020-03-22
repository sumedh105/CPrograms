#include <stdio.h>
#include <stdlib.h>
#define MAXVAL 50

void push(int);
int pop();
void display();

int top = -1;
int stack[MAXVAL];

int main()
{
	int choice = 0;
	int num = 0;
	int poppedNum = 0;

	while (1)
	{
		printf("\nEnter the choice\n");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				printf("\nEnter the number to be pushed\n");
				scanf("%d", &num);
				push(num);
				break;

			case 2:
				poppedNum = pop();
				printf("\nThe popped number is: %d\n", poppedNum);	
				break;

			case 3:
				display();
				break;

			case 4:
				exit(0);

			default:
				break;
		}

	}

	return 0;
}

void push(int num)
{
	if (top < MAXVAL)
	{
		stack[++top] = num;
		printf("\n__LINE__: %d\t top: %d\n", __LINE__, top);
	}
	else
	{
		printf("\nerror: cannot push in the stack, stack is full\n");
	}	
}

int pop()
{
	if (top >= 0)
	{
		return stack[--top];
	}
	else
	{
		printf("\nerror: cannot pop, the stack is empty\n");
	}
}

void display()
{
	int index = 0;

	printf("\n__LINE__: %d\t top: %d\n", __LINE__, top);
	for (index = 0; index <= top; ++index)
	{
		printf("\nstack[%d]: %d\n", index, stack[index]);
	}
}
