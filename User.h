// User.h
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

class Message; // Forward declaration to avoid circular dependencies

class User {
public:
    User(const std::string& username);

    void sendMessage(const std::string& recipient, const std::string& text);
    void receiveMessage(const Message& message);
    void displayMessages() const;

private:
    std::string username;
    std::vector<Message> receivedMessages;
};

#endif // USER_H
