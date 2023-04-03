#include <stdio.h>
#include <string.h>
#include "compare.h"

int compare(int a[], int i, int j)
{
	j = i + 1;
	if(a[i] > a[j]) {
		return 1;
	}
	else {
		return 0;
	}
}
