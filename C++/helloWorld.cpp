#include <iostream>

int main(){
    // integer datatype
    int x; // declaration
    x = 5; //assign statement
    int y = 5; //assign statement
    int z = x * y;
    double pi = 3.14;
    // character datatype store single chanters
    char namechar = 'anuj';

    // boolean datatype (true or false)
    bool is_sunny = true;
    bool is_rainy = false;

    // Strings (more object can be store unlike char)
    std::string namestring = "anuj";


    // all cout here
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << pi << '\n';
    std::cout << is_sunny << '\n';
    std::cout << is_rainy << '\n';
    std::cout << namechar << namestring << '\n';
    std::cout << namestring << '\n';

    std::cout << "my name is " << namestring << " and my age is " << z << '\n';


    return 0;
}
