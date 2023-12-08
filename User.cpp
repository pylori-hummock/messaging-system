// User.cpp
#include <iostream>
#include "User.h"
#include "Message.h"

User::User(const std::string& username) : username(username) {}

void User::sendMessage(const std::string& recipient, const std::string& text) {
    Message message(this, recipient, text);
    // Send the message (for simplicity, just store it in receivedMessages)
    receivedMessages.push_back(message);
}

void User::receiveMessage(const Message& message) {
    receivedMessages.push_back(message);
}

void User::displayMessages() const {
    std::cout << "Messages for user " << username << ":\n";
    for (const Message& message : receivedMessages) {
        message.display();
        std::cout << '\n';
    }
}
