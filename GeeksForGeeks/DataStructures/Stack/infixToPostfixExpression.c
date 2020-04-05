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

static int isOperand(char data)
{
	return (((data >= 'a') && (data <= 'z')) || ((data >= 'A') && (data <= 'Z')))
}

static int predecence(char data)
{
	switch (data)
	{
		case '+':
		case '-':
		{
			return 1;
		}

		case '/':
		case '*':
		{
			return 2;
		}

		case '^':
		{
			return 3;
		}
	}
}

int main()
{
	char expr[] = "a+b*c+d";


	return 0;
}
