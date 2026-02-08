#ifndef PERMANENT_SALARY_CALCULATOR_H
#define PERMANENT_SALARY_CALCULATOR_H

#include "SalaryCalculator.h"

class PermanentSalaryCalculator : public SalaryCalculator {
public:
    double calculate(const Employee& employee) const override {
        return employee.baseSalary * 1.2;
    }
};

#endif

