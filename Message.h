// Message.h
#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

class User; // Forward declaration to avoid circular dependencies

class Message {
public:
    Message(User* sender, const std::string& recipient, const std::string& text);

    void display() const;

private:
    User* sender;
    std::string recipient;
    std::string text;
};

#endif // MESSAGE_H
