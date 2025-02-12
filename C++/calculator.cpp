#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    using namespace std;

    cout << "/////////////////// Calculator /////////////////////\n";


    cout << "Enter either (+ - * /): ";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << '\n';
            break;
        default:
            cout << "Invalid operator" << '\n';
            break;
    }
    cout << "//////////////////////////////////////////////////\n";
    return 0;
}
