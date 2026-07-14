#include <iostream>
using namespace std;
int main (){

    int number = 123445;

    int count = 0;
    while(number){
        count++;
        number/=10;
    }

    cout << count << endl;


    return 0;
}