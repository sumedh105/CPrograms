#include <stdio.h>
#define MAXCHARS 1000

int main()
{
	char arrOne[MAXCHARS];
	char arrTwo[MAXCHARS];
	int indexOne = 0;
	int indexTwo = 0;
	int indexThree = 0;

	printf("\nEnter the two strings\n");
	scanf("%s", arrOne);
	scanf("%s", arrTwo);
	printf("\nThe two strings entered are: %s and %s\n", arrOne, arrTwo);

	for (indexOne = 0, indexThree = 0; arrOne[indexOne] != '\0'; ++indexOne)
	{
		for (indexTwo = 0; arrTwo[indexTwo] != '\0'; ++indexTwo)
		{
			if (arrOne[indexOne] == arrTwo[indexTwo])
			{
				break;
			}
		}

		if (arrTwo[indexTwo] == '\0')
		{
			arrOne[indexThree++] = arrOne[indexOne];
		}
	}
	arrOne[indexThree] = '\0';

	printf("\nThe final array is: %s\n", arrOne);

	return 0;
}
