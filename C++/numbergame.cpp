#include <iostream>

int main(){
    using namespace std;

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "///////////////////////////// pipi size gessing game gesing game///////////////////////////" << '\n';

    do{
        cout << "enter the guessing size of your pipi between 1 -100:";
        cin >> guess;
        tries++;

        if(guess > num){
            cout << "your pipi is too big\n";
        }
        else if(guess < num) {
            cout << "your pipi is too small \n";
        }
        else{
            cout << "this is correct size of your pipi " << num << " number of tries to get the correct pipi is " << tries << '\n';
        }
    }while (guess != num);




    return 0;
}
