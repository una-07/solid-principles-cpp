#ifndef PRICE_CALCULATOR_H
#define PRICE_CALCULATOR_H

#include "Order.h"

class PriceCalculator {
public:
    double calculateTotalPrice(const Order& order) {
        return order.getQuantity() * order.getPrice() * 0.9;
    }
};

#endif

