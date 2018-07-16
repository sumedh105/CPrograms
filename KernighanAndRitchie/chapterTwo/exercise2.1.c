#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("\nRange of a character is from: %d to %d\n", CHAR_MIN, CHAR_MAX);	
	printf("\nRange of a short integer is from: %d to %d\n", SHRT_MIN, SHRT_MAX);	
	printf("\nRange of an integer is from: %d to %d\n", INT_MIN, INT_MAX);	
	printf("\nRange of a long integer is from: %ld to %ld\n", LONG_MIN, LONG_MAX);	

	return 0;
}//end of main function
