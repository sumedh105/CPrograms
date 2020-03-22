#include <stdio.h>
#include <string.h>

char *names[] = {
			"Santosh",
			"Amol",
			"Santosh Jain",
			"Kishore",
			"Rahul",
			"Amolkumar",
			"Hemant"
		};

int main()
{
	char *temp;
	int index = 0;
	int indexOne = 0;
	int indexTwo = 0;
	int indexThree = 0;
	int result = 0;

	printf("\nThe array before sorting is:\n");
	for (index = 0; index < (sizeof(names) / sizeof(names[0])); ++index)
	{
		printf("\n%s\n", names[index]);
	}

	index = 0;
	for (indexOne = 0; indexOne < (sizeof(names) / sizeof(names[0])); ++indexOne)
	{
		indexTwo = (indexOne - 1);
		while ((indexTwo >= 0) && (strcmp(names[indexOne], names[indexTwo]) < 0))
		{
			--indexTwo;
		}
		++indexTwo;

		if (indexTwo >= 0)
		{
			if ((indexOne - indexTwo) == 1)
			{
				temp = names[indexOne];
				names[indexOne] = names[indexTwo];
				names[indexTwo] = temp;
			}

			else if ((indexOne - indexTwo) > 1)
			{
				temp = names[indexOne];
				for (indexThree = indexOne; indexThree > indexTwo; --indexThree)
				{
					names[indexThree] = names[indexThree - 1];
				}
				names[indexThree] = temp;
			}
		}
	}

	printf("\nThe array after sorting is:\n");
	for (index = 0; index < (sizeof(names) / sizeof(names[0])); ++index)
	{
		printf("\n%s\n", names[index]);
	}

	return 0;
}
