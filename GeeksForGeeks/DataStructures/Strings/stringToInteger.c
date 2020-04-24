#include <stdio.h>
#include <string.h>
#define MAXNUM 25

static int string_to_integer(char str[]);
static int is_space(int c);

int main()
{
	int c;
	char arr[MAXNUM];
	int result = 0;

	printf("\nEnter a string that needs to be converted to an integer\n");
	scanf("%s", arr);
	printf("\nThe entered string is: %s\n", arr);
	
	result = string_to_integer(arr);

	printf("\nThe converted string to integer is: %d\n", result);

	return 0;
}

static int string_to_integer(char str[])
{
	int num = 0;
	int sign = 0;
	int index = 0;

	while (is_space(str[index]))
	{
		++index;
	}

	sign = (str[index] == '-') ? -1: 1;

	if ((str[index] == '-') || (str[index] == '+'))
	{
		++index;
	}

	while (str[index] != '\0')
	{
		num = (num * 10) + (str[index] - '0');
		++index;
	}

	return (sign * num);
}

static int is_space(int c)
{
	return (c == ' ');
}
