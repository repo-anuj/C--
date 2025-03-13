#include <iostream>

double square(double length);

int main()
{
    // return = return a value back to the spot
    //           where you called the encompassing function
    double length = 5.6;
    double area = square(length);

    std::cout << "Area: " << area << "cm\n";

    return 0;
}

double square(double length){
    double result = length * length;
    return result;
}
