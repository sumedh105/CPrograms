#include <stdio.h>
#include <stdlib.h>
#define MAXNUM 10

int stack_one[MAXNUM];
int stack_two[MAXNUM];
int top_one = -1;
int top_two = -1;

static int is_stack_one_full();
static int is_stack_one_empty();
static int is_stack_two_full();
static int is_stack_two_empty();
static void push_one(int data);
static void push_two(int data);
static int pop_one();
static int pop_two();
static int pop();
static void push(int data);
static void display();

int main()
{
	int choice = 0;
	int data = 0;

	while (1)
	{
		printf("\nEnter 0 to exit\n");
		printf("\nEnter 1 to push the data in the queue\n");
		printf("\nEnter 2 to pop the data from the queue\n");
		printf("\nEnter 3 to display\n");
		printf("\nEnter your choice\n");
		scanf("%d", &choice);

		switch(choice)
		{
			case 0:
				exit(0);
			case 1:
				printf("\nEnter the data that needs to be enqueued\n");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				data = pop();
				printf("\nThe popped data is: %d\n", data);
				break;
			case 3:
				display();
				break;
			default:
				break;
		}
	}

	return 0;
}

static int is_stack_one_full()
{
	if (top_one == (MAXNUM - 1))
		return 1;
	else
		return 0;
}

static int is_stack_one_empty()
{
	if (top_one == -1)
		return 1;
	else
		return 0;
}

static int is_stack_two_full()
{
	if (top_two == (MAXNUM - 1))
		return 1;
	else
		return 0;
}

static int is_stack_two_empty()
{
	if (top_two == -1)
		return 1;
	else
		return 0;
}

static void push_one(int data)
{
	if (is_stack_one_full())
	{
		printf("\nStack full, nothing can be pushed in the stack\n");
	}
	else
	{
		stack_one[++top_one] = data;
	}
}

static void push_two(int data)
{
	if (is_stack_two_full())
	{
		printf("\nStack full, nothing can be pushed in the stack\n");
	}
	else
	{
		stack_two[++top_two] = data;
	}
}

static int pop_one()
{
	int data = 0;

	if (is_stack_one_empty())
	{
		printf("\nStack empty, nothing can be popped from the stack\n");
	}
	else
	{
		data = stack_one[top_one--];
	}

	return data;
}

static int pop_two()
{
	int data = 0;

	if (is_stack_two_empty())
	{
		printf("\nStack empty, nothing can be popped from the stack\n");
	}
	else
	{
		data = stack_two[top_two--];
	}

	return data;
}

static void push(int data)
{
	push_one(data);
}

static int pop()
{
	int data = 0;

	while (top_one != 0)
	{
		push_two(pop_one());
	}

	data = pop_one();

	while (top_two != -1)
	{
		push_one(pop_two());
	}

	return data;
}

static void display()
{
	int index = 0;

	for (index = 0; index <= top_one; ++index)
	{
		printf("\n%d\n", stack_one[index]);
	}
}

