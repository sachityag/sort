#include <stdio.h>
#include "bubblesort.h"
#include "swap.h"
#include "compare.h"




int main(int argc, char *argv[])
{
	int len = 11;
	int a[11] = {0, 1, 2, 3, 4, 7, 8, 11, 9, 6, 5};
	bubblesort(a, len);
	return 0;
}
