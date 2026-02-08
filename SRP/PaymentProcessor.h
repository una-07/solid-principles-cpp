#ifndef PAYMENT_PROCESSOR_H
#define PAYMENT_PROCESSOR_H

#include <iostream>
#include <string>

class PaymentProcessor {
public:
    void processPayment(const std::string& details) {
        std::cout << "Payment processed using: " << details << std::endl;
    }
};

#endif

