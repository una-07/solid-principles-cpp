#ifndef INTERN_SALARY_CALCULATOR_H
#define INTERN_SALARY_CALCULATOR_H

#include "SalaryCalculator.h"

class InternSalaryCalculator : public SalaryCalculator {
public:
    double calculate(const Employee& employee) const override {
        return employee.baseSalary * 0.8;
    }
};

#endif

