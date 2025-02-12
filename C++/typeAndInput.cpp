#include <iostream>

int main(){
//////////////////////////////////////// type conversation /////////////////////////////////////

    //type conversation =  conversation a value of one data type to another
    //              implicit = automatic
    //              Explicit = precede value with new data type (int) x

// explicit method
    double x = (int) 3.14;
    std::cout << x <<'\n';

    int y = (double) 3.14;
    std::cout << y << '\n';

// automatic
    char a = 100;
    std::cout << a << '\n';

// perfect example
    int correct = 8;
    int question = 40;
    double result = (double)correct/(double)question * 100; // without using the double in the formula we will simply get one and only 0

    std::cout<< result << "%" <<'\n';

//////////////////////////// User Input //////////////////////////////////

// double pi = 3.14;
// double radius;

// std::cout << "enter the radius of the circle: ";
// std::cin >> radius;
// double circumference = 2 * pi * radius;
// std::cout << "the circumference is " << circumference;

// for getting full name out of the input
using namespace std;
string name;
cout << "enter your full name: ";
getline(cin >> ws, name);
cout << "your name is " << name;

    return 0;
}
