#ifndef REVERSE_H
#define REVERSE_H

template<typename Iterator>
void reverse(Iterator start, Iterator end)
{
	

	while (start != end) {
		end--;

		auto temp = *end;
		*end = *start;
		*start = temp;

		++start;
	}
}

#endif
