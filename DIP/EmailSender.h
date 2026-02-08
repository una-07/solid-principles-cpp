#ifndef EMAIL_SENDER_H
#define EMAIL_SENDER_H

#include <iostream>
#include "INotificationSender.h"

class EmailSender : public INotificationSender {
public:
    void send(const std::string& message) override {
        std::cout << "Email sent: " << message << std::endl;
    }
};

#endif

