#include <stdio.h>
#define BUFSIZE 1000

static char *alloc(int n);
static void afree(char *);

static char buffer[BUFSIZE];
static char *allocp = buffer;

int main()
{
	int n;
	char *ptr;

	printf("\nEnter the no of bytes that needs to be allocated\n");
	scanf("%d", &n);
	printf("\nThe no of bytes that needs to be allocated are: %d\n", n);

	allocp = alloc(n);

	printf("\n__LINE__: %d\n", __LINE__);

	ptr = buffer;
	printf("\n__LINE__: %d\n", __LINE__);
	if (allocp != NULL)
	{
	printf("\n__LINE__: %d\n", __LINE__);
		while (ptr <= (ptr + n))
		{
			*ptr = 'S';
			ptr++;
	printf("\n__LINE__: %d\n", __LINE__);
		}
	printf("\n__LINE__: %d\n", __LINE__);
	}
	printf("\nThe array is: %s\n", buffer);

	return 0;
}

static char *alloc(int noOfBytes)
{
	if ((buffer + BUFSIZE - allocp >= noOfBytes))
	{
		allocp = allocp + noOfBytes;
		return allocp - noOfBytes;	
	}
	else
	{
		return NULL;
	}
}

static void afree(char *p)
{
	if ((p >= buffer) && (p < (buffer + BUFSIZE)))
		allocp = p;
}
