#include <iostream>
using namespace std;
int main(){

    string s = "Hello ayush yadav";

    string result = ""; 

    for(int i = 0 ;i<s.length() ; i++){
        if(s[i] !=' '){
            result+=s[i];
        }
    }

    cout << result << endl;


    return 0;
}