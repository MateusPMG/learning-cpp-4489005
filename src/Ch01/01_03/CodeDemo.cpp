// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Type in your name: ";
    std::cin >> str;
    std::cout << "Nice name " << str << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
