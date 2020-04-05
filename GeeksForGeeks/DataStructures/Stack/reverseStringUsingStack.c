#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20

char stack[MAXSIZE];
int top = -1;

static void push(char c)
{
	if (top == (MAXSIZE - 1))
	{
		printf("\nStack overflow, nothing can be pushed in the stack\n");
	}

	else
	{
		stack[++top] = c;
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

static void reverse(char *str)
{
	int index = 0;

	if (*str == '\0')
	{
		printf("\nString is empty, cannot be reversed\n");
	}

	else
	{
		while ((str[index] != '\0') && (str[index] != '\n'))
		{
			push(str[index]);
			++index;
		}

		while (top != -1)
		{
			printf("%c", pop());
		}
		printf("\n");
	}
}

int main()
{
	char *str = NULL;
	int index = 0;
	char c;

	str = (char *)malloc(MAXSIZE * sizeof(char));
	printf("\nEnter the string that needs to be reversed\n");
	while ((c = getchar()) != EOF)
	{
		str[index++] = c;
	}
	str[index] = '\0';
	printf("\nThe string that needs to be reversed is: %s\n", str);
	printf("\nThe reversed string is:\n");

	reverse(str);

	return 0;
}
