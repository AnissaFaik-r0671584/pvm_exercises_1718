#include <iostream>

void quotrest(int x, int y, int* q, int* r) {
	*q = x / y;
	*r = x % y;
}

void main()
{
	int x = 56, y = 10;
	int q, r;

	quotrest(x, y, &q, &r);

	std::cout << q << " " << r << std::endl;
}