#include <stdio.h>
#include <stdarg.h>

void minscanf(char *fmt, ...);

int main()
{
	int a;

	minscanf("%d", &a);
	printf("\n%d\n", a);

	return 0;
}

void minscanf(char *fmt, ...)
{
	va_list ap;
	char *sval, *p;
	int *ival;
	float *dval;

	va_start(ap, fmt);
	for (p = fmt; *p; p++)
	{
		if (*p != '%')
		{
			putchar(*p);
			continue;
		}
		switch(*++p)
		{
			case 'd':
				ival = va_arg(ap, int *);
				scanf("%d", ival);
				break;

			case 'f':
				dval = va_arg(ap, float *);
				scanf("%f", dval);
				break;

			case 's':
				for (sval = va_arg(ap, char *); *sval; sval++)
				{
					putchar(*sval);
				}
				break;
			default:
				putchar(*p);
				break;
		}
	}
	va_end(ap);
}

