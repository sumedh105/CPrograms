#include <stdio.h>

char *names[] = {
			"Santosh",
			"Amol",
			"Santosh Jain",
			"Kishore",
			"Rahul",
			"Amolkumar"
		};

int main()
{
	char *temp;
	int index = 0;
	int *ptr;
	int indexOne = 0;

	printf("\nsizeof(ptr): %d\n", (int)sizeof(ptr));
	printf("\nsizeof(int): %d\n", (int)sizeof(int));
	printf("\nsizeof(names): %d\n", (int)sizeof(names));
	printf("\nsizeof(*names): %d\n", (int)sizeof(*names));
	printf("\nsizeof(**names): %d\n", (int)sizeof(**names));
	printf("\nsizeof(names[0]): %d\n", (int)sizeof(names[0]));

#if 1 
	while (index < sizeof(names)/sizeof(names[0]))
	{
		printf("\n%s\n", names[index]);
		++index;
	}
#endif

	index = 0;
	while (index < sizeof(names)/sizeof(names[0]))
	{
		while (names[index][indexOne] != '\0')
		{
			printf("%c", names[index][indexOne]);
			++indexOne;
		}
		printf("\n");
		++index;
		indexOne = 0;
	}

	return 0;
}
