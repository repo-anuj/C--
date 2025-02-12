#include <iostream>

int main(){

    using namespace std;

    string name;

    while(name.empty()) {
        cout << "enter your name: " ;
        getline(cin, name);
    }

    cout << "hello " << name;

    return 0;
}
