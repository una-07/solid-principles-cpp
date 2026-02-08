#ifndef INOTIFICATION_SENDER_H
#define INOTIFICATION_SENDER_H

#include <string>

class INotificationSender {
public:
    virtual void send(const std::string& message) = 0;
    virtual ~INotificationSender() {}
};

#endif

