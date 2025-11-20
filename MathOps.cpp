#include<iostream>

int main(){
    std::string name;
    std::cout <<"Enter two numbers: ";
    int a, b, c;
    std::cin >> a >> b;
    std::cin.ignore(); // To ignore the newline character left in the buffer
    std::cout << "Enter name ";
    
    std::getline(std::cin, name);
    std::cout << "Hello " << name << std::endl;
   // c = a + b;
    std::cout << "Addition: " << a;
    return 0;
}