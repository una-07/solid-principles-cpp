#include <iostream>

#include "SRP/Order.h"
#include "SRP/PriceCalculator.h"
#include "SRP/PaymentProcessor.h"
#include "SRP/NotificationService.h"

#include "OCP/Employee.h"
#include "OCP/PermanentSalaryCalculator.h"
#include "OCP/ContractSalaryCalculator.h"
#include "OCP/InternSalaryCalculator.h"

#include "ISP/AllInOnePrinter.h"
#include "ISP/BasicPrinter.h"

#include "DIP/NotificationService.h"
#include "DIP/EmailSender.h"
#include "DIP/SmsSender.h"

int main() {
    Order order("Laptop", 2, 1000.0);
    PriceCalculator priceCalculator;
    double totalPrice = priceCalculator.calculateTotalPrice(order);
    std::cout << totalPrice << std::endl;

    PaymentProcessor paymentProcessor;
    paymentProcessor.processPayment("Credit Card");

    NotificationService orderNotification;
    orderNotification.sendEmail("user@mail.com");

    Employee employee1("Ali", 2000);
    PermanentSalaryCalculator permanentCalculator;
    std::cout << permanentCalculator.calculate(employee1) << std::endl;

    Employee employee2("Aruzhan", 1800);
    ContractSalaryCalculator contractCalculator;
    std::cout << contractCalculator.calculate(employee2) << std::endl;

    Employee employee3("Dias", 1000);
    InternSalaryCalculator internCalculator;
    std::cout << internCalculator.calculate(employee3) << std::endl;

    AllInOnePrinter allPrinter;
    allPrinter.print("Document");
    allPrinter.scan("Document");
    allPrinter.fax("Document");

    BasicPrinter basicPrinter;
    basicPrinter.print("Simple document");

    EmailSender emailSender;
    NotificationService notificationByEmail(&emailSender);
    notificationByEmail.sendNotification("Hello via Email");

    SmsSender smsSender;
    NotificationService notificationBySms(&smsSender);
    notificationBySms.sendNotification("Hello via SMS");

    return 0;
}

