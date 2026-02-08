#ifndef ALL_IN_ONE_PRINTER_H
#define ALL_IN_ONE_PRINTER_H

#include <iostream>
#include "IPrinter.h"
#include "IScanner.h"
#include "IFax.h"

class AllInOnePrinter : public IPrinter, public IScanner, public IFax {
public:
    void print(const std::string& content) override {
        std::cout << "Printing: " << content << std::endl;
    }

    void scan(const std::string& content) override {
        std::cout << "Scanning: " << content << std::endl;
    }

    void fax(const std::string& content) override {
        std::cout << "Faxing: " << content << std::endl;
    }
};

#endif

