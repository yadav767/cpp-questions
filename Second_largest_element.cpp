#include <iostream>
#include <climits>
using namespace std;
int main (){

    int arr[10]={52,63,85,63,34,56,67,34,78,99};

    int largest=INT_MIN;
    int second_largest = INT_MIN;

    for(int i = 0 ; i<10 ;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }else if (arr[i]>second_largest && arr[i]!=second_largest){
            second_largest=arr[i];
        }
    }

    cout << largest << endl;
    cout << second_largest << endl;

    return 0;


}