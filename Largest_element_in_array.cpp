#include <iostream>
using namespace std;
int main(){
    int arr[10] = {2, 4, 7, 3, 1, 0, 6, 8, 5, 9};
    int max=arr[0];
    for(int i =0 ;i<10;i++){
        if(arr[i]>max) max=arr[i];
    }

    
    cout << max;
    return 0;


}