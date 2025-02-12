#include <iostream>

int main(){

    char grade;
    using namespace std;
    cout << "Enter the grade bwtween A - F " <<'\n';
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Average";
            break;
        case 'D':
            cout << "Poor";
            break;
        case 'F':
            cout << "Fail";
            break;
        default:
            cout << "Invalid grade" << '\n';
            break;
    }

    // int month;
    // using namespace std;
    // cout << "Enter the month " <<'\n';
    // cin >> month;

    // switch(month){
    //     case 1:
    //         cout << "January";
    //         break;
    //     case 2:
    //         cout << "February";
    //         break;
    //     case 3:
    //         cout << "March";
    //         break;
    //     case 4:
    //         cout << "April";
    //         break;
    //     case 5:
    //         cout << "May";
    //         break;
    //     case 6:
    //         cout << "June";
    //         break;
    //     case 7:
    //         cout << "July";
    //         break;
    //     case 8:
    //         cout << "August";
    //         break;
    //     case 9:
    //         cout << "September";
    //         break;
    //     case 10:
    //         cout << "October";
    //         break;
    //     case 11:
    //         cout << "November";
    //         break;
    //     case 12:
    //         cout << "December";
    //         break;
    //     default:
    //         cout << "Invalid month";
    //         break;
    // }
    return 0;
}
