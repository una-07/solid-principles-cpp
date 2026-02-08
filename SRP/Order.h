#ifndef ORDER_H
#define ORDER_H

#include <string>

class Order {
private:
    std::string productName;
    int quantity;
    double price;

public:
    Order(const std::string& name, int qty, double pr)
        : productName(name), quantity(qty), price(pr) {}

    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }
};

#endif

