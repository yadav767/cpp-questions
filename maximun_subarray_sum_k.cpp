#include <iostream>
using namespace std;
int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int k=4;

    int max_sum=0;

    for(int i=0 ; i<=10-k ;i++){
        int sum =0;
        for(int j=i ;j<k+i;j++){
            sum+=arr[j];
        }
        max_sum = max(max_sum,sum);

    }


    cout << "Maximum sum of subarray of size " << k << " is: " << max_sum << endl;



    return 0;

}