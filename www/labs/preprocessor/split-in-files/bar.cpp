#include "bar.h"
#include "foo.h"

// In bar.cpp
char bar(double, double)
{
	foo(1);

	return 'd';
}