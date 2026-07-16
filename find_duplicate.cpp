#include <iostream>
#include <map>
using namespace std;
int main(){

    int arr[10]={1,2,3,4,5,6,5,7,8,1};
    map<int,int>mp;

    for(int i=0 ;i<10 ;i++){
        if(mp.count(arr[i])>0){
            mp[arr[i]]++;
        }else{
            mp[arr[i]]=1;
        }
    }

    for(auto &p : mp){
        if(p.second >1){
            cout << p.first << endl;
        }
    }

}