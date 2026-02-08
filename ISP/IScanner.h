#ifndef ISCANNER_H
#define ISCANNER_H

#include <string>

class IScanner {
public:
    virtual void scan(const std::string& content) = 0;
    virtual ~IScanner() {}
};

#endif

