#ifndef NOTIFICATION_SERVICE_H
#define NOTIFICATION_SERVICE_H

#include <iostream>
#include <string>

class NotificationService {
public:
    void sendEmail(const std::string& email) {
        std::cout << "Confirmation email sent to: " << email << std::endl;
    }
};

#endif

