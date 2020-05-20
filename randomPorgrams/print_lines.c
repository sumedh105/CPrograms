#include <stdio.h>
#define MAXNUM 100

int print_line(char arr[], int limit);

int main()
{
	char arr[MAXNUM];

	while(print_line(arr, MAXNUM) > 0)
	{
		printf("\n%s\n", arr);
	}
	return 0;
}

int print_line(char arr[], int limit)
{
	int c = 0;
	int index = 0;

	while ((c = getchar()) != EOF)
	{
		if (c != '\n')
		{
			arr[index++] = c;
		}
		else if (c == '\n')
		{
			arr[index] = '\0';
			return 1;
		}
	}
}
