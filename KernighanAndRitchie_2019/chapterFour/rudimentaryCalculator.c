#include <stdio.h>
#define MAX 100

int getLine(char str[], int max);
double atof(char str[]);

int main()
{
	char str[MAX];
	double sum = 0.0;

	printf("\nEnter the numbers which needs to be added.\n");
	while (getLine(str, MAX) > 0)
	{
		printf("\nSum is: %f\n", sum += atof(str));
	}

	return 0;
}

int getLine(char str[], int max)
{
	int c;
	int index = 0;

	while (((c = getchar()) != EOF) && (c != '\n'))
	{
		str[index++] = c;	
	}
	if (str[index] == '\n')
	{
		str[index++] = c;
	}
	str[index] = '\0';

	return index;
}

double atof(char str[])
{
	double val = 0.0;
	double power = 1.0;
	double result = 0.0;
	int index = 0;	

	while (str[index] != '.')
	{
		val = val * 10.0 + (str[index] - '0');
		++index;
	}
	if (str[index] == '.')
	{
		++index;
	}
	while (str[index] != '\0')
	{
		val = val * 10.0 + (str[index] - '0');
		power = power * 10.0;
		++index;
	}

	result = val / power;

	return result;
}
