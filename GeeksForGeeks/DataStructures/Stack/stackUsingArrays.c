#include <stdio.h>
#include <stdlib.h>

struct stack
{
	int top;
	int capacity;
	int *arr;
};

static void push(struct stack **st, int data)
{
	if ((*st)->top == (*st)->capacity)
	{
		printf("\nThe stack is full, nothing can be added to the stack\n");
	}
	else
	{
		(*st)->arr[++(*st)->top] = data;
	}
}

static int pop(struct stack **st)
{
	if ((*st)->top == -1)
	{
		printf("\nNothing can be popped from the stack, the stack is empty\n");
	}
	else
	{
		return ((*st)->arr[(*st)->top--]);
	}
}

static int peek(struct stack **st)
{
	return ((*st)->arr[(*st)->top]);
}

static void display(struct stack *st)
{
	int index = 0;

	if (st->top < 0)
	{
		printf("\nThe stack is empty, nothing can be printed\n");
	}

	else
	{
		while (index <= st->top)
		{
			printf("\n%d\n", st->arr[index]);
			++index;
		}
	}
}

struct stack *createStack(unsigned int capacity)
{
	struct stack *st = (struct stack *)malloc(sizeof(struct stack));
	st->top = -1;
	st->capacity = capacity;
	st->arr = (int *)malloc(capacity * sizeof(int));

	return st;
}

int main()
{
	int choice = 0;
	struct stack *st = NULL;

	st = createStack(100);

	while (1)
	{
		printf("\nPress 0 to exit\n");
		printf("\nPress 1 to push the data to the stack\n");
		printf("\nPress 2 to pop the data from the stack\n");
		printf("\nPress 3 to peek or get the top from the stack\n");
		printf("\nPress 4 to display the stack\n");

		scanf("%d", &choice);

		switch (choice)
		{
			case 0:
			{
				exit(1);
			}
			case 1:
			{	
				int data = 0;
				printf("\nEnter the data that needs to be pushed\n");
				scanf("%d", &data);

				push(&st, data);
				break;
			}
			case 2:
			{
				int data = 0;
				data = pop(&st);

				printf("\nThe popped data is: %d\n", data);

				break;
			}
			case 3:
			{	
				int data = 0;
				data = peek(&st);

				printf("\nThe data at top is: %d\n", data);

				break;
			}
			case 4:
			{
				display(st);
				break;
			}
			default:
			{
				break;
			}
		}
	}
}
