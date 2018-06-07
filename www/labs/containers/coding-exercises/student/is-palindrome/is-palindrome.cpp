#include "is-palindrome.h"
#include <vector>


bool is_palindrome(std::vector<int> ns)
{
	int size = ns.size();
	bool res = true;

	for (int n : ns) {
		if (n != ns[size - 1]) {
			return false;
		}
		else{ size--; }
		
	}
	return res;
}