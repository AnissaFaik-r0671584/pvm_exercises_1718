#include "Min.h"

int* min(int* p, int* q, int* r) {
	if (*p <= *q && *p <= *r) {
		return p;
	}
	if (*q <= *p && *q <= *r) {
		return q;
	}
	else {
		return r;
	}
	
}