#include <stdio.h>
#include <stdarg.h>

void minprintf(char *, ...);

int main()
{
	//char *a = "Hello World";
	//int a = 20;
	double a = 40.02;
	minprintf("The floating point value is: %f", a);

	return 0;
}//end of main function

void minprintf(char *fmt, ...)
{
	va_list vp;
	int ival;
	double dval;
	char *p, *sval;	

	va_start(vp, fmt);
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putchar(*p);
			continue;
		}//end of if condition

		switch(*++p) {
			case 'd':
				ival = va_arg(vp, int);
				printf("\n%d\n", ival);
				break;
			case 'f':
				dval = va_arg(vp, double);
				printf("\n%f\n", dval);
				break;
			case 's':
				for (sval = va_arg(vp, char *); *sval; ++sval) {
					putchar(*sval);
				}//end of for loop		
				break;
			default:
				putchar(*p);
				break;
		}//end of switch case
	}//end of for loop

	va_end(vp);
}//end of minprintf() function
