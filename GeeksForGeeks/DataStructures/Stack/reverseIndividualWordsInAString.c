#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 20

char stack[MAXSIZE];
int top = -1;

static void push(char c)
{
	if (top == (MAXSIZE - 1))
	{
		printf("\nStack overflow, cannot push elements in the stack\n");
	}

	else
	{
		stack[++top] = c;
	}
}

static char pop()
{
	char data = 0;

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
		printf("\nThe string is empty, nothing can be reversed\n");
	}

	else
	{
		while (str[index] != '\0')
		{
			if (str[index] != ' ')
			{
				push(str[index]);
			}
			else
			{
				while (top != -1)
				{
					printf("%c", pop());
				}
				printf("%c", ' ');
			}

			++index;
		}
	}
}

int main()
{
	char *str = NULL;
	int index = 0;
	char c;

	str = (char *)malloc(MAXSIZE * sizeof(char));

	printf("\nEnter the string from which the individual words needs to be reversed\n");
	while ((c = getchar()) != EOF)
	{
		str[index++] = c;
	}
	str[index] = '\0';
	//scanf("%s", str);
	printf("\nThe string from which the individual words needs to be reversed is: %s\n", str);

	reverse(str);

	return 0;
}
