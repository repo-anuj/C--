#include <iostream>

int main(){
    //////////// if statement if a condicution is true do it if not don't do it //////

    int age;

    std::cout << "enter your age:- ";
    std::cin >> age;

    if(age >= 18){
        if(age >= 40){
        std::cout << "you are old get some bitches";
        }
        else{
            std::cout << "you are an adult";
        }
    }

    else{
        std::cout << "you are not an adult";
    }
    return 0;
}
