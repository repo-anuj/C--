#include <iostream>

int main(){

    double temp;
    char unit;

    using namespace std;

    cout << "////////////////// Temperature Conversion /////////////////////////\n";

    cout << "F = Fahreanhight\n";
    cout << "C = Celsius\n";
    cout << "What unity you want to convert to: ";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "enter the temp in celsius";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Tenprature is:" << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        cout << "enter the temperature in Fahreanhight: ";
        cin >> temp;

        temp = (temp - 32)/1.8;
        cout << "Temperature is: " << temp << "C\n";
    }
    else{
        cout << "Invalid unit enter only C and F\n";
    }
    cout << "//////////////////////////////////////////////////////////////////\n";

    return 0;
}
