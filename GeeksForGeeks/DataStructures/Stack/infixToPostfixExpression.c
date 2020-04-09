#include <stdio.h>
#define MAXSIZE 20

char arr[MAXSIZE];
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
		printf("\nI am here\n");
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
	return (((data >= 'a') && (data <= 'z')) || ((data >= 'A') && (data <= 'Z')));
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

static void display()
{
	int index = 0;

	for (index = 0; index <= top; ++index)
	{
		printf("\nstack[index]: %c\n", stack[index]);
	}
}

int main()
{
	char expr[] = "a+b*c+d";
	int index = 0;
	int indexTwo = 0;

	while (expr[index] != '\0')
	{
		printf("\n%c\n", expr[index]);
		if (isOperand(expr[index]))
		{
			arr[indexTwo++] = expr[index];
		}

		else
		{
			while ((top != -1) && (predecence(expr[index]) <= predecence(stack[top])))
			{
				arr[indexTwo++] = pop();
			}
			push(expr[index]);
			//display();
			printf("\n%d\n", __LINE__);
		}

		++index;
	}

	while (top != -1)
	{
		arr[indexTwo] = pop();
		++indexTwo;
	}
	arr[indexTwo] = '\0';

	printf("\nInfix to postfix converted array is: %s\n", arr);

	return 0;
}
