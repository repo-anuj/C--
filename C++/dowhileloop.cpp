#include <iostream>

// dp while loop
int main(){

    int number;

    do{
        std::cout << "Enter an posotive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "this number is: " << number;

    return 0;
}
