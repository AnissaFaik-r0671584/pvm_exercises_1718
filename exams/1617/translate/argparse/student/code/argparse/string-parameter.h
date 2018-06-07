#ifndef STRINGPARAMETER_H
#define STRINGPARAMETER_H
#include "parameter.h"

class StringParameter : public Parameter
{
private:
	std::string value;

public:
	StringParameter(const std::string&, const std::string&) {}

	bool parse(std::list<std::string>&) override;

	std::string value() const;
}

// Te vertalen als globale functie, d.i. een functie buiten de klasse
std::shared_ptr<StringParameter> string(const std::string&, const std::string&);
#endif // !STRINGPARAMETER_H
