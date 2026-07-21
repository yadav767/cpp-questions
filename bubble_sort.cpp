#include <iostream>
using namespace std;
int main(){


    int arr[10]={1,5,4,3,7,8,9,2,0,6};


    for (int i=0 ;i<10 ;i++){
        for(int j=0 ;j<10-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i=0 ;i<10 ;i++){
        cout << arr[i] << endl;
    }

    return 0;
}