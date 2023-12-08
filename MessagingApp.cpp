// MessagingApp.cpp
#include "User.h"

int main() {
    User user1("Alice");
    User user2("Bob");

    user1.sendMessage("Bob", "Hi Bob! How are you?");
    user2.sendMessage("Alice", "Hello Alice! I'm doing well.");

    user1.displayMessages();
    user2.displayMessages();

    return 0;
}
