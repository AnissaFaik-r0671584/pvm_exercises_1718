#include "counter.h"


Counter::Counter() : value(0) {};

Counter::Counter(unsigned initialValue) : value(initialValue) {};

unsigned Counter::getValue() const {
	return this->value;
};

void Counter::setValue(unsigned value) {
	this->value= value;
}

void Counter::increment() {
	value++;
};

void Counter::reset() {
	value = 0;
};



