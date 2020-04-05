#include <stdio.h>
#define MAXSIZE 20

char stack[MAXSIZE];
int top = -1;

static void push(char data)
{
	if (top == (MAXSIZE - 1))
	{
		printf("\nStack overflow, nothing can be pushed\n");
	}

	else
	{
		stack[++top] = data;
	}
}

static char pop()
{
	char data;

	if (top == -1)
	{
		printf("\nStack underflow, nothing can be popped from the stack\n");
		return -1;
	}

	else
	{
		data = stack[top--];
		return data;
	}
}

int main()
{



	return 0;
}
