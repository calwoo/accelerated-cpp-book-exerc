#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name: ";
    // read name
    std::string name;
    std::cin >> name;
    // greeting
    std::cout << "Hello, " << name << "!" << std::endl;
    return 0;
}