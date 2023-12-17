#include <iostream>
#include "../../include/bar/bar.h"

Bar::Bar() {}

Bar::Bar(int value) : value_(value) {}

Bar::~Bar() {}

int Bar::getValue() const {
    return value_;
}

void Bar::setValue(int value) {
    value_ = value;
}

void Bar::doSomething() {
    std::cout << "Bar is doing something!" << std::endl;
}
