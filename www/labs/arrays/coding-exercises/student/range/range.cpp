#include "range.h"


int* range(int from, int to)
{
	/*int size = to - from + 1;

	int* ns = new int[size];

	for (int i = 1; i < size; i++) {
		ns[i] = from;
		from++;
	}

	return ns;*/
	int width = to - from + 1;
	int* result = new int[width];

	for (int i = 0; i != width; ++i)
	{
		result[i] = from + i;
	}

	return result;
    
}