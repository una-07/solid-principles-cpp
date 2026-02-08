#ifndef CONTRACT_SALARY_CALCULATOR_H
#define CONTRACT_SALARY_CALCULATOR_H

#include "SalaryCalculator.h"

class ContractSalaryCalculator : public SalaryCalculator {
public:
    double calculate(const Employee& employee) const override {
        return employee.baseSalary * 1.1;
    }
};

#endif

