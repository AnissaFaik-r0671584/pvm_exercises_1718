#include "uniq.h"
#include <set>


void uniq(std::vector<int>* ns)
{
	std::set<int> ms((*ns).begin(), (*ns).end());
	*ns = std::vector<int>((ms).begin(), (ms).end());
}