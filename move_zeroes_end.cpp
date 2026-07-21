#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,0,5,0,5,0,3,0,5,9};
    int insert_position= 0;
    for(int i=0 ;i<10 ;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[insert_position]);
            insert_position++;
        }
    }

    for(int i=0 ;i<10 ;i++){
        cout << arr[i] <<", " ;
    }


}