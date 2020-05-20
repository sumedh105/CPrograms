#include <stdio.h>

static int flag = 0;

static void Hello();
static void Hi();

static void Hi()
{
	printf("\nHi\n");
	Hello();
}

static void Hello()
{
	printf("\nHello\n");
	Hi();
}

int main()
{
	Hi();
	return 0;
}
