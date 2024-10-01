#include <iostream>
#include<string>
bool isValidUsername(const std::string& username) {
    if (username.length() < 5) {
        return false;  
    }
    if (!std::isalpha(username[0])) {
        return false;  
    }

    for (char ch : username) {
        if (!std::isalnum(ch)) {
            return false; 
        }
    }
    return true;  
}
int main() {
    std::string username;
    std::cout << "Enter username: ";
    std::cin >> username;
    if (isValidUsername(username)) {
        std::cout << "username is valid" << std::endl;
    } else {
        std::cout << "username is not valid" << std::endl;
    }
    return 0;
}