#ifndef IPRINTER_H
#define IPRINTER_H

#include <string>

class IPrinter {
public:
    virtual void print(const std::string& content) = 0;
    virtual ~IPrinter() {}
};

#endif

