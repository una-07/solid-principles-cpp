#ifndef BASIC_PRINTER_H
#define BASIC_PRINTER_H

#include <iostream>
#include "IPrinter.h"

class BasicPrinter : public IPrinter {
public:
    void print(const std::string& content) override {
        std::cout << "Printing: " << content << std::endl;
    }
};

#endif

