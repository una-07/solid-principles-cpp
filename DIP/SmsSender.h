#ifndef SMS_SENDER_H
#define SMS_SENDER_H

#include <iostream>
#include "INotificationSender.h"

class SmsSender : public INotificationSender {
public:
    void send(const std::string& message) override {
        std::cout << "SMS sent: " << message << std::endl;
    }
};

#endif

