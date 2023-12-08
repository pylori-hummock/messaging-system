// Message.cpp
#include <iostream>
#include "Message.h"
#include "User.h"

Message::Message(User* sender, const std::string& recipient, const std::string& text)
    : sender(sender), recipient(recipient), text(text) {}

void Message::display() const {
    std::cout << "From: " << sender->getUsername() << "\n";
    std::cout << "To: " << recipient << "\n";
    std::cout << "Text: " << text << "\n";
}
