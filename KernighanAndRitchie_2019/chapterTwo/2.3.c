#include <stdio.h>
#define MAXCHARS 1000

int power(int, int);

int main()
{
	char arr[MAXCHARS];
	int c;
	int flag = 0;
	int result = 0;
	int length = 0;
	int exponent = 0;
	int index = 0;

	printf("\nEnter the hexadecimal integers\n");
	while ((c = getchar()) != EOF)
	{
		arr[index++] = c;
	}
	arr[index] = '\0';
	printf("\nThe hexadecimal integer in the string is: %s\n", arr);

	index = 0;
	while (arr[index] != '\0')
	{
		if (((arr[index] == '0') && (arr[index + 1] == 'x')) || ((arr[index] == '0') && (arr[index + 1] == 'X')))
		{
			flag = 1;
		}

		else
		{
			flag = 0;
		}

		++index;
	}

	index = index - 2;
	length = index;

	if (flag == 1)
	{
		while (index >= 2)
		{
			exponent = (length - index);
		
			if ((arr[index] >= '0') && (arr[index] <= '9'))
			{
				result = result + ((arr[index] - '0') * power(16, exponent));
			}

			else
			{
				if ((arr[index] == 'a') || (arr[index] == 'A'))
				{
					result = result + (10 * power(16, exponent));
				}

				else if ((arr[index] == 'b') || (arr[index] == 'B'))
				{
					result = result + (11 * power(16, exponent));
				}

				else if ((arr[index] == 'c') || (arr[index] == 'C'))
				{
					result = result + (12 * power(16, exponent));
				}

				else if ((arr[index] == 'd') || (arr[index] == 'D'))
				{
					result = result + (13 * power(16, exponent));
				}

				else if ((arr[index] == 'e') || (arr[index] == 'E'))
				{
					result = result + (14 * power(16, exponent));
				}

				else if ((arr[index] == 'f') || (arr[index] == 'F'))
				{
					result = result + (15 * power(16, exponent));
				}
			}

			--index;	
		}	
	}

	else
	{
		while (index >= 0)
		{
			exponent = (length - index);
	
			if ((arr[index] >= '0') && (arr[index] <= '9'))
			{
				result = result + ((arr[index] - '0') * power(16, exponent));
			}

			else
			{
				if ((arr[index] == 'a') || (arr[index] == 'A'))
				{
					result = result + (10 * power(16, exponent));
				}

				else if ((arr[index] == 'b') || (arr[index] == 'B'))
				{
					result = result + (11 * power(16, exponent));
				}

				else if ((arr[index] == 'c') || (arr[index] == 'C'))
				{
					result = result + (12 * power(16, exponent));
				}

				else if ((arr[index] == 'd') || (arr[index] == 'D'))
				{
					result = result + (13 * power(16, exponent));
				}

				else if ((arr[index] == 'e') || (arr[index] == 'E'))
				{
					result = result + (14 * power(16, exponent));
				}

				else if ((arr[index] == 'f') || (arr[index] == 'F'))
				{
					result = result + (15 * power(16, exponent));
				}
			}

			--index;	
		}
	}

	printf("\nThe converted hex to int: %d\n", result);

	return 0;
}

int power(int base, int exponent)
{
	int result = 1;
	int index = 0;

	if (exponent == 0)
	{
		result = 1;
	}

	else
	{
		for (index = 0; index < exponent; ++index)
		{
			result = result * base;	
		}
	}

	return result;
}
