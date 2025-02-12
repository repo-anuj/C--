#include <iostream>

int main(){

    //arithmetic operators = return the result of a specific arithmetic operations (+ - * /)

    int students = 21;

    //students = students + 1
    //students+=1;
    //students++;

    //students = students - 1;
    //students-=1;
    //students--;

    //students = students * 2;
    //students*=2;

    //students = students / 2;
    //students/=2;

    int reminder = students % 2; // % = remainder

    std::cout << students << std::endl;
    std::cout << reminder << std::endl;


    return 0;
}
