#include "foo.h"
#include "bar.h"

// In foo.cpp
int foo(int x)
{
	bar(9, 8);

	return x + 1;
}