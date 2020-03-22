#include <stdio.h>
#define MAX 1000

int main()
{
	int i, sign, c, index = 0;
	double val, power;
	char str[MAX];
	double result;

	printf("\nEnter the double number in a character array\n");
	while ((c = getchar()) != EOF)
	{
		str[index++] = c;
	}
	str[index] = '\0';
	printf("\nThe entered array is: %s\n", str);

	val = 0.0;
	index = 0;
	while (str[index] != '.')
	{
		val = val * 10.0 + (str[index] - '0');
		++index;
	}

	if (str[index] == '.')
	{
		++index;
	}

	power = 1.0;
	while (str[index] != '\0')
	{
		val = val * 10.0 + (str[index] - '0');
		power = power * 10.0;
		++index;
	}

	result = val / power;

	printf("\nThe final result is: %f\n", result);

	return 0;
}
