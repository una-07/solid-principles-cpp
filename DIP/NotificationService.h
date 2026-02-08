#ifndef NOTIFICATION_SERVICE_H
#define NOTIFICATION_SERVICE_H

#include "INotificationSender.h"

class NotificationService {
private:
    INotificationSender* sender;

public:
    NotificationService(INotificationSender* s) : sender(s) {}

    void sendNotification(const std::string& message) {
        sender->send(message);
    }
};

#endif

