#include <iostream>
#include <cstring>

int main() {
    char buffer[10];
    std::cout << "Enter your name: ";
    std::cin >> buffer; // Vulnerable: No size check, possible buffer overflow.
    std::cout << "Hello, " << buffer << "!" << std::endl;
    return 0;
}
