#include "split.h"


void split(int* ns, unsigned size, int** odds, unsigned* n_odds, int** evens, unsigned* n_evens)
{
	*n_odds = 0;
	*evens = 0;

	for (unsigned i = 0; i < size; i++) {
		if (ns[i] % 2 == 0) {
			n_evens++;
		}
		else {
			n_odds++;
		}
	}

	*odds = new int[*n_odds];
	*evens = new int[*n_evens];

	unsigned x = 0;
	unsigned y = 0;

	for (unsigned i = 0; i < size; i++) {
		if (ns[i] % 2 == 0) {
			*evens[x] = ns[i];
			x++;
		}
		else {
			*odds[y] = ns[i];
			y++;
		}
	}

}
