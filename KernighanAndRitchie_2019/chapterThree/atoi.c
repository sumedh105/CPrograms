#include <stdio.h>
#define MAXCHAR 1000

int main()
{
	char str[MAXCHAR];
	int sign;
	int result = 0;
	int c;
	int index = 0;

	printf("\nEnter the number in a character array\n");
	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		str[index++] = c;
	}
	str[index] = '\0';

	index = 0;

	if (str[index] == '+')
	{
		sign = 1;
		++index;
	}
	else if (str[index] == '-')
	{
		sign = -1;
		++index;
	}
	else
	{
		sign = 1;
	}
	
	while (str[index] != '\0')
	{
		result = (result * 10) + (str[index] - '0');
		++index;
	}

	result = sign * result;
	printf("\nThe converted ascii to integer is: %d\n", result);

	return 0;
}
