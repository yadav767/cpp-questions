#include <iostream>
using namespace std;

bool check_anagaram(string a, string b)
{
    
    if (a.length() != b.length())
        return false;

    int freq[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        freq[tolower(a[i]) - 'a']++;
        freq[tolower(b[i]) - 'a']--;
    }

    for(int i =0 ; i<26 ;i++){
        if(freq[i]!=0) return false;
    }
    return true;
}

int main()
{

    cout<< (check_anagaram("Listen","Silent")?"Yes it is anagram":"No it is not anagram")<<endl;
    cout<< (check_anagaram("hello","world")?"Yes it is anagram":"No it is not anagram")<<endl;

    return 0;
}
