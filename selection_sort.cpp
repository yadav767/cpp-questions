#include <iostream>
using namespace std;
int main(){

    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    int min_index;

    for (int i=0 ;i<10 ;i++){
        min_index=i;
        for(int j=i+1 ; j<10 ;j++){
            if(arr[j]<arr[min_index]){
                min_index=j ;
            }
        }
        if(min_index!=i){
            swap(arr[i],arr[min_index]);
        }


    }

    for (int i=0 ;i<10 ;i++){
        cout << arr[i] << endl;
    }


    return 0;
}