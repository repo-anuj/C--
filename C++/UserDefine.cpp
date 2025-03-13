#include <iostream>

// void happyBirthday(int a, int b){
//     std::cout << "Happy Birthday!" << std::endl;
//     std::cout << "You are " << a+b << " years old!" << std::endl;
// }

// int main(){

//     // function = block of reusable code
//     happyBirthday(15, 15);
//     happyBirthday(10, 12);

//     return 0;
// }

void happyBirthday(std::string name, int age);

int main(){

    std::string name = "bro";
    int age = 16;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout<<"happy birthday to " << name << age << '\n';
    std::cout<<"happy birthday to " << name << age << '\n';
    std::cout<<"happy birthday to dear " << name << age << '\n';
    std::cout<<"happy birthday to " << name << age << '\n';
}
