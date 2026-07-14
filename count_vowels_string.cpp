#include <iostream>
using namespace std;
int main (){
    string s="Hello world";

    int count = 0;

    for(int i=0 ; i<s.length() ;i++){
        int ch = s[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
                count ++;
            }
    }

    cout << count << endl;


    return 0;
}