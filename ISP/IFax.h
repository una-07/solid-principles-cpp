#ifndef IFAX_H
#define IFAX_H

#include <string>

class IFax {
public:
    virtual void fax(const std::string& content) = 0;
    virtual ~IFax() {}
};

#endif

