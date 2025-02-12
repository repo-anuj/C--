#include <iostream>

int main(){
    // && = check if two conditions are true
    // || = check if at least one condition is true
    // ! = reverses the logical state of its operand

    using namespace std;
    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp > 0 && temp < 30){
        cout << "The temperature is good.\n";
    }
    else if(temp > 30 && temp < 100){
        cout << "you are fucked up.\n";
    }
    else if(temp < 0){
        cout << "The temperature is bad.\n";
    }
    return 0;
}
