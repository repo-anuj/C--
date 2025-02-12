#include <iostream>
#include <vector>



// typedef use to give nick name to the already declared datatype
using namespace std;
//typedef vector<pair<string, int>> pairlist_t;
typedef string text; // should use using keyword because is makes more sense it uses in template
using number = int;

//namespace is like a function scope in c++ it is good best for global declaration of variables
namespace PI {
    double pi = 3.1445862;
}

int main(){
    // const is use for the making a variable constant
    // program for calculating the circumference of a circle
    double PI = 3.14;
    double radius = 15.6;
    double circumference = 2 * PI * radius;

    std::cout << "The circumference of a circle is :- " << circumference << '\n';

    std::cout << "using namespace for PI " << circumference * PI::pi << '\n';

    //tyepdef example
    text name = "anuj";
    number age = 20;
    std::cout << age << '\n';
    std::cout << name << age << '\n';

    using namespace PI;

    double radius1 = 15.6;
    double circumference1 = 2 * pi * radius1;

    std::cout << "The circumference of a circle using namespace in global variable is :- " << circumference1 << '\n';


    return 0;
}
