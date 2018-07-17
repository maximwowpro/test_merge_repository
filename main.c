#include <stdio.h>
#include "calk.h"

int main(void)
{
	int a = 1;
	int b = 2;
	
	int resultPlus = plus(a, b);
	int resultMinus = minus(a, b);
	printf("result plus = %i\n", resultPlus);
	printf("result minus = %i\n", resultMinus);
	return 0;
}
