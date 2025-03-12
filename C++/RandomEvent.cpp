#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;
    using namespace std;

    switch(randNum){
        case 1: cout << "you are duck up\n";
            break;
        case 2: cout << "someone gonna a duck your css \n";
            break;
        case 3: cout << "you are really ducked  \n";
            break;
        case 4: cout << "just give up my nigga you not gonna make it  \n";
            break;
        case 5: cout << "yaaa nigga you win this time \n";
            break;
    }

    return 0;
}
