#include <iostream>
using namespace std;

int find_missing_number(int arr[],int size){

    int expected_sum = size*((size+1)/2);

    int actual_sum = 0;
    for(int i=0 ;i<size ; i++){
        actual_sum+=arr[i];
    }

    return expected_sum-actual_sum;

}

int main(){

    int arr[5]={0,1,2,3,5};

    cout << "Missing number is : " <<find_missing_number(arr,5) << endl;

    return 0;
}