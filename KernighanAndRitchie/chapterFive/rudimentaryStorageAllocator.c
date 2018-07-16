#include <stdio.h>

#define ALLOCSIZE 10000

static char allocBuf[ALLOCSIZE];	/* Globally maintained buffer */
static char *allocPointer = allocBuf;  /* Pointer to the alloc buffer */

char * alloc(int);
void afree(char *);

int main()
{



	return 0;
}//end of main function

char * alloc(int noOfBytes) {



}//end of alloc() function

void afree(char *ptr) {


}//end of afree() function
