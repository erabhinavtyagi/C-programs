//03. Develop programs to demonstrate the functionality of preprocessor operator ## and also conditional compilation.


#include<stdio.h>

#define concat(a,b) a##b

void main()
{
#ifdef concat
       	printf("concatenation by ## preprocessor operator: %d\n", concat(10,20));
#else
	printf("Concat Not defined.\n");
#endif
}

