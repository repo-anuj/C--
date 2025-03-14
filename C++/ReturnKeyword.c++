#include <iostream>

// double square(double length);
// double cube(double length);

// int main()
// {
//     // return = return a value back to the spot
//     //           where you called the encompassing function
//     double length = 5.6;
//     double area = square(length);
//     double cubed = cube(length);

//     std::cout << "Area: " << area << "cm\n";
//     std::cout << "cube: " << cubed << "cm\n";

//     return 0;
// }

// double square(double length){
//     double result = length * length;
//     return result;
// }
// double cube(double length){
//     return length * 3;
// }

std::string concatstring(std::string first, std::string last);

int main(){
    std::string firstName = "bro";
    std::string lastName = "bro";
    std::string fullName = concatstring(firstName, lastName);

    std::cout << "hello " << fullName;

    return 0;

}
std::string concatstring(std::string first, std::string last){
    return first + " " + last;
}
