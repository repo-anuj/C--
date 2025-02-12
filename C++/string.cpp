#include <iostream>

int main(){

    using namespace std;
    string name;
    cout << "enter your name: ";
    getline(cin, name);

    name.length() > 12 ? cout << "your name cant be over 12 char \n" : cout << "Welcome user " << name << '\n';

    name.empty() ? cout << "you didn't enter your name \n" : cout << "welcome\n" ;

    // name.clear();
    // cout << name;

    name.append("@gmail.com");
    cout << "your username is now " << name << '\n';

    cout << "your first character is: " << name.at(0) << '\n';

    cout << name.find('a') << '\n';
    cout << name.erase(0, 2) << '\n';

    return 0;
}
