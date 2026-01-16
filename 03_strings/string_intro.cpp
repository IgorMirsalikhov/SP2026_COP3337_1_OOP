#include <iostream>
#include <string>

int main(void) {
    // Create a string
    std::string str = "Hello";

    std::cout << str << " has size " << str.length() << std::endl;
    
    // Add to the end of the string
    str += " World!";
    std::cout << str << " has size " << str.length() << std::endl;
    

    return 0;
}