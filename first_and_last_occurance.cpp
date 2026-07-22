#include <iostream>
using namespace std;
int main(){

    int arr[7]={5, 7, 7, 8, 8, 8, 10};
    int target = 8;

    int first = -1;
    int last = -1;

    for (int i=0 ;i<7 ;i++){
        if(arr[i]==target){
            if(first==-1) first = i;
            last=i;
        }
    }

    cout << "The first and last occurance of the element : "<<first <<" "<<last<<endl;

    return 0;
}