#include<iostream>
int main() {
    int sum = 0;
    int A[] = {1, 2, 3, 4, 5};
    for(int  num : A) {
        sum += num;
        std::cout << "Current Sum: " << sum << std::endl;
    }
    std::cout << "Final Sum: " << sum << std::endl;
    
    return 0;
}