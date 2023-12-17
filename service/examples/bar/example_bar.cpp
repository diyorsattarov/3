#include <iostream>
#include "../../include/bar/bar.h"

int main() {
    Bar bar(1);
    std::cout << "hello world! bar value: " << bar.getValue()  << std::endl;
}