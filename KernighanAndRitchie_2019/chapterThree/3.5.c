#include <stdio.h>
#define MAXCHARS 1000

int power(int base, int index);

int main()
{
	int result = 0;
	int num = 0; 
	int a = 0; 
	char str[MAXCHARS];
	int index = 0;
	int b = 0;
	int strLength;

	printf("\nEnter the number that should be converted to ascii\n");
	scanf("%d", &num);
	printf("\nThe number entered is: %d\n", num);

	printf("\nEnter the base representation to which the integer must be converted\n");
	scanf("%d", &b);
	printf("\nThe base representation entered is: %d\n", b);

	while (num != 0)
	{
		str[index++] = (num % 10) + '0';
		num = num / 10;
	}
	str[index] = '\0';
	strLength = index - 1;

	index = 0;
	while (str[index] != '\0')
	{
		result = result + (power(b, index) * (str[index] - '0'));
		++index;
	}
	printf("\nresult: %d\n", result);

	index = 0;
	while (result != 0)
	{
		str[index++] = (result % 10) + '0';
		result = result / 10;
	}
	str[index] = '\0';

	printf("\nThe converted string from integer to ascii is: %s\n", str);

	return 0;
}

int power(int base, int index)
{
	int result = 1;

	if (index == 0)
	{
		return 1;
	}
	else
	{
		while (index != 0)
		{
			result = base * result;
			--index;	
		}
	}

	return result;
}

