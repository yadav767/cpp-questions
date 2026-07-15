#include <iostream>
using namespace std;

void first_repeating_character(string s){
    if(s.length()==0) cout << "String is empty "<< endl;

    int freq[26]={0};

    for(int i=0 ;i<s.length() ;i++){
        freq[tolower(s[i])-'a']++;
    }

    for(int i=0 ;i <s.length() ; i++){
        char ch=tolower(s[i]);
        if(freq[ch-'a']==1){
            cout << "The first repeating character is : " << ch;
            break;
        }
    }

}

int main(){

    first_repeating_character("Swiss");


    return 0 ;

}