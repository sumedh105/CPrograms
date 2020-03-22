#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t currentTime;
	time_t biggest = 0x7fffffff;

	printf("\nThe current time is: %ld\n", time(&currentTime));

	printf("\nThe difference in time is: %lf\n", difftime(currentTime, biggest));	
	printf("\nThe difference in time is: %lf\n", difftime(biggest, currentTime));	

	return 0;
}
