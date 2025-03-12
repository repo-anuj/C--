#include <iostream>

int main(){

    int num;
    std::cout << "enter the number ";
    std::cin >> num;

    for(int i = 1; i <= 10; i++){
        std::cout << num * i <<'\n';
    }
    std::cout << "the table of " << num << " is complete\n";
    return 0;
}
