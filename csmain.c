#include <stdio.h>
#include "swap.h"
#include "compare.h"

int main(int argc, char *argv[])
{
	int a[11];
	int i, j;
	compare(a, i, j);
	printf("%d, %d\n", i, j);
	swap(a, i, j);
	printf("%d, %d\n", i, j);
	return 0;
}
