#include <iostream>

int main(){

    using namespace std;
    int rows;
    int columns;
    char symbol;

    cout << "enter the number of rows: ";
    cin >> rows;
    cout << "enter the number of columns: ";
    cin >> columns;
    cout << "enter the symbol: ";
    cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol;
        }
        cout << '\n';
    }

    return 0;
}
