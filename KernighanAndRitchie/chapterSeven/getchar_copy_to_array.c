#include <stdio.h>
#define NOF_CHARS 1000

int main()
{
	int c;
	int index = 0;
	char arr[NOF_CHARS] = {0};

	printf("arr: %s\n", arr);

	while ((c = getchar()) != EOF) {
		arr[index] = c;
		++index;	
	}//end of while loop	

	printf("\narr: %s\n", arr);

	return 0;
}//end of main function
