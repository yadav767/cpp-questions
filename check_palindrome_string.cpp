#include <iostream>
using namespace std;
int main (){

    string  s = "malayalam";

    int start = 0;
    int last = s.length()-1;
    int isPalindrome = true;
    while(start<last){
        if(s[start]!=s[last]){
            isPalindrome=false;
        }
        start++;
        last--;
    }

    if(isPalindrome){
        cout << "String is palindrome " << endl;
    }else {
        cout <<"String is not palindrome " << endl;
    }

    return 0;

}