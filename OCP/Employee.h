#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    std::string name;
    double baseSalary;

    Employee(const std::string& n, double salary)
        : name(n), baseSalary(salary) {}
};

#endif

