#ifndef PARAMETER_H
#define PARAMETER_H
#include <string>
#include <list>


class Parameter
{
protected:
	std::string name;

	Parameter(const std::string&) {}

	// In C++: gebruik std::list
	virtual bool parse(std::list<std::string>&) = 0;
}


#endif // !PARAMETER_H

