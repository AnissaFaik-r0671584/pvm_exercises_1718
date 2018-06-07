#include "Swap.h"

void swap(int* p, int* q) {
	int replace = *p;
	*p = *q;
	*q = replace;
}