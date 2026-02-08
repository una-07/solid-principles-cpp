#ifndef SALARY_CALCULATOR_H
#define SALARY_CALCULATOR_H

#include "Employee.h"

class SalaryCalculator {
public:
    virtual double calculate(const Employee& employee) const = 0;
    virtual ~SalaryCalculator() {}
};

#endif

