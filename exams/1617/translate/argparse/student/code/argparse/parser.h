#ifndef PARSER_H
#define PARSER_H
#include "parameter.h"
#include <vector>
#include <memory>

class Parser
{
private:
	std::vector<std::shared_ptr<Parameter>> parameters;
	bool process(std::list<std::string>&) const;

public:
	Parser& addParameter(std::shared_ptr<Parameter>);

	void parse(std::list<std::string>&) const;
}


#endif // !PARSER_H
